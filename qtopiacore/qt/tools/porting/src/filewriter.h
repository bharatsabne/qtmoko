/****************************************************************************
**
** Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the qt3to4 porting application of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial Usage
** Licensees holding valid Qt Commercial licenses may use this file in
** accordance with the Qt Commercial License Agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Nokia.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain
** additional rights. These rights are described in the Nokia Qt LGPL
** Exception version 1.0, included in the file LGPL_EXCEPTION.txt in this
** package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
** If you are unsure which license is appropriate for your use, please
** contact the sales department at http://www.qtsoftware.com/contact.
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef FILEWRITER_H
#define FILEWRITER_H

#include <QMap>
#include <QString>
#include <QByteArray>

QT_BEGIN_NAMESPACE

class FileWriter
{
public:
    enum OverWriteFiles{DontOverWrite, AlwaysOverWrite, AskOnOverWrite};
    enum WriteResult { WriteFailed = 0, WriteSucceeded = 1, WriteSkipped };
    static FileWriter *instance();
    static void deleteInstance();

    FileWriter(OverWriteFiles overWRite = AskOnOverWrite,
                QString overwriteMessage = QString());
    WriteResult writeFile(QString filePath, QByteArray contents);
    WriteResult writeFileVerbously(QString filePath, QByteArray contents);
    void setOverwriteFiles(OverWriteFiles writeMode);
private:
    QMap<QString, int> processedFilesSet;
    OverWriteFiles overWriteFiles;
    QString overwriteMessage;
    static FileWriter *theInstance;
};

QByteArray detectLineEndings(const QByteArray &array);

QT_END_NAMESPACE

#endif
