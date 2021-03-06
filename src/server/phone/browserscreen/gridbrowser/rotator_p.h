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
#ifndef ROTATOR_P_H
#define ROTATOR_P_H

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt Extended API.  It exists purely as an
// implementation detail.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#include "animator_p.h"

class Painter;
class SelectedItem;


class Rotator : public Animator
{
public:

    explicit Rotator(int numSpins = DEFAULT_SPINS);

    void animate(QPainter *,SelectedItem *item,qreal percent);

    // Returns description of this class for configuration purposes.
    static const QString &description() { return mDescription; }

private:

    static const QString mDescription;

    static const int DEFAULT_SPINS = 3;

    int numSpins;
};

#endif
