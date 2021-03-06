/*
 * This file was generated by qfsodbusxml2cpp version 0.7
 * Command line was: qfsodbusxml2cpp -p qfsopimtask -c QFsoPIMTask specs/xml/org.freesmartphone.PIM.Task.xml
 *
 * qfsodbusxml2cpp is Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef QFSOPIMTASK_H
#define QFSOPIMTASK_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include <qfsodbusabstractinterface.h>

#if defined(QFSO_LIBRARY)
    #define QFSO_EXPORT Q_DECL_EXPORT
#else
    #define QFSO_EXPORT Q_DECL_IMPORT
#endif

/*
 * Proxy class for interface org.freesmartphone.PIM.Task
 */
class QFSO_EXPORT QFsoPIMTask: public QFsoDbusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freesmartphone.PIM.Task"; }

public:
    QFsoPIMTask(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~QFsoPIMTask();

public Q_SLOTS: // METHODS
    inline QFsoDBusPendingReply<> Delete()
    {
        QList<QVariant> argumentList;
        return fsoAsyncCall(QLatin1String("Delete"), argumentList);
    }

    inline QFsoDBusPendingReply<QVariantMap> GetContent()
    {
        QList<QVariant> argumentList;
        return fsoAsyncCall(QLatin1String("GetContent"), argumentList);
    }

    inline QFsoDBusPendingReply<QVariantMap> GetMultipleFields(const QString &field_list)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(field_list);
        return fsoAsyncCall(QLatin1String("GetMultipleFields"), argumentList);
    }

    inline QFsoDBusPendingReply<QStringList> GetUsedBackends()
    {
        QList<QVariant> argumentList;
        return fsoAsyncCall(QLatin1String("GetUsedBackends"), argumentList);
    }

    inline QFsoDBusPendingReply<> Update(const QVariantMap &task_data)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(task_data);
        return fsoAsyncCall(QLatin1String("Update"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

namespace org {
  namespace freesmartphone {
    namespace PIM {
      typedef ::QFsoPIMTask Task;
    }
  }
}
#endif
