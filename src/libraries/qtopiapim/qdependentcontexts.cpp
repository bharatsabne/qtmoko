/****************************************************************************
**
** This file is part of the Qt Extended Opensource Package.
**
** Copyright (C) 2009 Trolltech ASA.
**
** Contact: Qt Extended Information (info@qtextended.org)
**
** This file may be used under the terms of the GNU General Public License
** version 2.0 as published by the Free Software Foundation and appearing
** in the file LICENSE.GPL included in the packaging of this file.
**
** Please review the following information to ensure GNU General Public
** Licensing requirements will be met:
**     http://www.fsf.org/licensing/licenses/info/GPLv2.html.
**
**
****************************************************************************/
#include <qtopiasql.h>
#include "qdependentcontexts_p.h"
#include "qappointment.h"
#include <QString>

#include <QSqlError>
#include <QVariant>
#include <QDebug>
#include <QTimer>
#include <QBuffer>
#include <QSettings>

#include <qtopianamespace.h>
#include <qtopiaipcenvelope.h>
#ifdef Q_OS_WIN32
#include <process.h>
#else
#include <unistd.h>
#endif

/**************
 * CONTEXT
 *************/

/*!
  \class QDependentEventsContext
    \inpublicgroup QtUiModule
    \inpublicgroup QtMessagingModule
    \inpublicgroup QtTelephonyModule
    \inpublicgroup QtPimModule

  \ingroup pim
  \preliminary
  \brief The QDependentEventsContext class provides a base class for QAppointments generated by other models.

  It provides a simplified version of a QAppointmentContext that provides mostly read only
  access to events (QAppointments) that might be generated by other PIM data - for example,
  birthdays from contacts.  In this sense, the events presented by the QDependentEventsContext
  are dependent on other types of PIM records.

  \sa QAppointment, QContactBirthdayContext, QContactAnniversaryContext, QTaskEventContext, {Pim Library}
*/

/*!
  Creates a QDependentBirthdayContext with the given \a parent and IO \a access.
*/
QDependentEventsContext::QDependentEventsContext(QObject *parent, QAppointmentSqlIO *access)
    : QAppointmentContext(parent), mAccess(access), mMappedContext(0)
{
}

/*!
  \reimp
  */
QString QDependentEventsContext::title(const QPimSource &source) const
{
    return source.identity;
}

/*!
  Returns false, as QDependentEventsContext records are not editable
  through QAppointmentModel.
  */
bool QDependentEventsContext::editable() const
{
    return false;
}

/*!
  Returns a list with the default source in it.

  \sa defaultSource()
*/
QSet<QPimSource> QDependentEventsContext::sources() const
{
    QSet<QPimSource> list;
    list.insert(defaultSource());
    return list;
}

/*!
  Returns the identifier for this context, mapped to
  the local device.

  \sa id(), QUniqueIdGenerator::mappedContext()
*/
uint QDependentEventsContext::mappedContext()
{
    if (!mMappedContext)
        mMappedContext = QUniqueIdGenerator::mappedContext(id());
    return mMappedContext;
}

/*!
  \reimp
  */
void QDependentEventsContext::setVisibleSources(const QSet<QPimSource> &set)
{
    QSet<int> show;
    QSet<int> hide;
    QSet<QPimSource> list = sources();
    foreach (QPimSource s, list) {
        int context = QPimSqlIO::sourceContext(s);
        if (set.contains(s)) {
            show.insert(context);
        } else {
            hide.insert(context);
        }
    }

    QSet<int> filter = mAccess->contextFilter();
    filter.unite(hide);
    filter.subtract(show);
    mAccess->setContextFilter(filter);
}

/*!
  \reimp
  */
QSet<QPimSource> QDependentEventsContext::visibleSources() const
{
    QSet<int> filter = mAccess->contextFilter();
    QSet<QPimSource> result;

    QSet<QPimSource> list = sources();
    foreach (QPimSource s, list) {
        int context = QPimSqlIO::sourceContext(s);
        if (!filter.contains(context))
            result.insert(s);
    }
    return result;
}

/*!
  \reimp
  */
bool QDependentEventsContext::exists(const QUniqueId &id) const
{
    return !source(id).isNull();
}

/*!
  \reimp
  */
QPimSource QDependentEventsContext::source(const QUniqueId &id) const
{
    int itemContext = mAccess->context(id);
    QSet<QPimSource> list = sources();
    foreach(QPimSource s, list) {
        int context = QPimSqlIO::sourceContext(s);
        if (context == itemContext)
            return s;
    }
    return QPimSource();
}

/*!
  \reimp
  */
bool QDependentEventsContext::updateAppointment(const QAppointment &appointment)
{
    if (mAccess)
        return mAccess->updateAppointment(appointment);
    return false;
}

/*!
  \reimp
  */
bool QDependentEventsContext::removeAppointment(const QUniqueId &id)
{
    if (mAccess)
        return mAccess->removeAppointment(id);
    return false;
}

/*!
  \reimp
  */
QUniqueId QDependentEventsContext::addAppointment(const QAppointment &appointment, const QPimSource &source)
{
    if (mAccess)
        return mAccess->addAppointment(appointment, source, false);
    return QUniqueId();
}

/*!
  \reimp
  */
bool QDependentEventsContext::removeOccurrence(const QUniqueId &original, const QDate &date)
{
    if (mAccess)
        return mAccess->removeOccurrence(original, date);
    return false;
}

/*!
  \reimp
  */
QUniqueId QDependentEventsContext::replaceOccurrence(const QUniqueId &original, const QOccurrence &occurrence, const QDate& date)
{
    if (mAccess)
        return mAccess->replaceOccurrence(original, occurrence, date);
    return QUniqueId();
}

/*!
  \reimp
  */
QUniqueId QDependentEventsContext::replaceRemaining(const QUniqueId &original, const QAppointment &r, const QDate& date)
{
    if (mAccess)
        return mAccess->replaceRemaining(original, r, date);
    return QUniqueId();
}

// ===========
//  Birthdays
// ===========

/*!
  \class QContactBirthdayContext
    \inpublicgroup QtUiModule
    \inpublicgroup QtMessagingModule
    \inpublicgroup QtTelephonyModule
    \inpublicgroup QtPimModule

  \ingroup pim
  \preliminary
  \brief The QContactBirthdayContext class provides QAppointments based on the QContact birthdays.

  QContactModel uses this class to create synthetic QAppointments from QContacts that have
  a birthday set.  The QAppointments are automatically updated (or deleted) as the QContact
  changes.

  \sa QContactAnniversaryContext, QContactModel, {Pim Library}
*/

/*!
  Creates a QContactBirthdayContext with the given \a parent and IO \a source.
*/
QContactBirthdayContext::QContactBirthdayContext(QObject *parent, QAppointmentSqlIO *source)
    : QDependentEventsContext(parent, source)
{
    mSource.context = id();
    mSource.identity = tr("Contact Birthdays");
}

/*!
  \reimp
  */
QIcon QContactBirthdayContext::icon() const
{
    static QIcon ceicon(":icon/birthday");
    return ceicon;
}

/*!
  \reimp
  */
QString QContactBirthdayContext::description() const
{
    return mSource.identity;
}

/*!
  \reimp
  */
QString QContactBirthdayContext::title() const
{
    return mSource.identity;
}

/*!
  \reimp
  */
QPimSource QContactBirthdayContext::defaultSource() const
{
    return mSource;
}

/*!
  \reimp
  */
QUuid QContactBirthdayContext::id() const
{
    // generated with uuidgen
    static QUuid u("822d32bc-d646-4b36-b1fd-090b2199b725");
    return u;
}

// ===============
//  Anniversaries
// ===============

/*!
  \class QContactAnniversaryContext
    \inpublicgroup QtUiModule
    \inpublicgroup QtMessagingModule
    \inpublicgroup QtTelephonyModule
    \inpublicgroup QtPimModule

  \ingroup pim
  \preliminary
  \brief The QContactAnniversaryContext class provides QAppointments based on the QContact anniversaries.

  QContactModel uses this class to create synthetic QAppointments from QContacts that have
  an anniversary set.  The QAppointments are automatically updated (or deleted) as the QContact
  changes.

  \sa QContactBirthdayContext, QContactModel, {Pim Library}
*/

/*!
  Creates a QContactAnniversaryContext with the given \a parent and IO \a source.
*/
QContactAnniversaryContext::QContactAnniversaryContext(QObject *parent, QAppointmentSqlIO *source)
    : QDependentEventsContext(parent, source)
{
    mSource.context = id();
    mSource.identity = tr("Contact Anniversaries");
}

/*!
  \reimp
  */
QIcon QContactAnniversaryContext::icon() const
{
    static QIcon ceicon(":icon/anniversary");
    return ceicon;
}

/*!
  \reimp
  */
QString QContactAnniversaryContext::description() const
{
    return mSource.identity;
}

/*!
  \reimp
  */
QString QContactAnniversaryContext::title() const
{
    return mSource.identity;
}

/*!
  \reimp
  */
QPimSource QContactAnniversaryContext::defaultSource() const
{
    return mSource;
}

/*!
  \reimp
  */
QUuid QContactAnniversaryContext::id() const
{
    // generated with uuidgen
    static QUuid u("5a72a3fe-f2a8-4cba-94bb-0880dac41520");
    return u;
}

// =======
//  Tasks
// =======

/*!
  \class QTaskEventContext
    \inpublicgroup QtUiModule
    \inpublicgroup QtMessagingModule
    \inpublicgroup QtTelephonyModule
    \inpublicgroup QtPimModule

  \ingroup pim
  \preliminary
  \brief The QTaskEventContext class provides QAppointments based on QTask due dates.

  QTaskModel uses this class to create synthetic QAppointments from QTasks that have
  a due date set.  The QAppointments are automatically updated (or deleted) as the
  QTask  changes.

  \sa QTaskModel, {Pim Library}
*/

/*!
  Creates a QTaskEventContext with the given \a parent and IO \a source.
*/
    QTaskEventContext::QTaskEventContext(QObject *parent, QAppointmentSqlIO *source)
    : QDependentEventsContext(parent, source)
{
    mSource.context = id();
    mSource.identity = tr("Task Due Dates");
}

/*!
  \reimp
  */
QIcon QTaskEventContext::icon() const
{
    static QIcon ceicon(":icon/duedate");
    return ceicon;
}

/*!
  \reimp
  */
QString QTaskEventContext::description() const
{
    return mSource.identity;
}

/*!
  \reimp
  */
QString QTaskEventContext::title() const
{
    return mSource.identity;
}

/*!
  \reimp
  */
QPimSource QTaskEventContext::defaultSource() const
{
    return mSource;
}

/*!
  \reimp
  */
QUuid QTaskEventContext::id() const
{
    // generated with uuidgen
    static QUuid u("a2c69584-a85a-49c6-967b-6e2895f5c777");
    return u;
}

