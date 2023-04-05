/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -i impanel_adaptor.h -a :impanel_adaptor.cpp org.kde.impanel.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "impanel_adaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class ImpanelAdaptor
 */

ImpanelAdaptor::ImpanelAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

ImpanelAdaptor::~ImpanelAdaptor()
{
    // destructor
}

/*
 * Implementation of adaptor class Impanel2Adaptor
 */

Impanel2Adaptor::Impanel2Adaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

Impanel2Adaptor::~Impanel2Adaptor()
{
    // destructor
}

void Impanel2Adaptor::SetLookupTable(const QStringList &label, const QStringList &text, const QStringList &attr, bool hasPrev, bool hasNext, int cursor, int layout)
{
    // handle method call org.kde.impanel2.SetLookupTable
    QMetaObject::invokeMethod(parent(), "SetLookupTable", Q_ARG(QStringList, label), Q_ARG(QStringList, text), Q_ARG(QStringList, attr), Q_ARG(bool, hasPrev), Q_ARG(bool, hasNext), Q_ARG(int, cursor), Q_ARG(int, layout));
}

void Impanel2Adaptor::SetSpotRect(int x, int y, int w, int h)
{
    // handle method call org.kde.impanel2.SetSpotRect
    QMetaObject::invokeMethod(parent(), "SetSpotRect", Q_ARG(int, x), Q_ARG(int, y), Q_ARG(int, w), Q_ARG(int, h));
}

