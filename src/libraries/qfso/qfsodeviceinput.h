/*
 * This file was generated by qfsodbusxml2cpp version 0.7
 * Command line was: qfsodbusxml2cpp -p qfsodeviceinput -c QFsoDeviceInput specs/xml/org.freesmartphone.Device.Input.xml
 *
 * qfsodbusxml2cpp is Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef QFSODEVICEINPUT_H
#define QFSODEVICEINPUT_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface org.freesmartphone.Device.Input
 */
class QFsoDeviceInput: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freesmartphone.Device.Input"; }

public:
    QFsoDeviceInput(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~QFsoDeviceInput();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<QString> GetCapabilities()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetCapabilities"), argumentList);
    }

    inline QDBusPendingReply<QString> GetId()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetId"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void DirectionalEvent(const QString &name, int axis, int offset);
    void Event(const QString &name, const QString &action, int seconds);
};

namespace org {
  namespace freesmartphone {
    namespace Device {
      typedef ::QFsoDeviceInput Input;
    }
  }
}
#endif