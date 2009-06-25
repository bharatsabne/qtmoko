/****************************************************************************
**
** Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the QtXmlPatterns module of the Qt Toolkit.
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

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists purely as an
// implementation detail.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.

#ifndef Patternist_TemplateParam_H
#define Patternist_TemplateParam_H

#include "qfunctionargument_p.h"

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

namespace QPatternist
{
    /**
     * @short Carries meta data for @c xsl:with-param as encountered in
     * template callsites such as @c xsl:call-template and @c
     * xsl:apply-templates.
     *
     * WithParam is similar to FunctionArgument, but has in addition a default
     * value in the form of an Expression.
     *
     * @since 4.5
     * @ingroup Patternist_expressions
     * @author Frans Englich <fenglich@trolltech.com>
     */
    class WithParam : public FunctionArgument
    {
    public:
        typedef QExplicitlySharedDataPointer<WithParam> Ptr;
        typedef QHash<QXmlName, Ptr> Hash;

        /**
         * @p sourceExpression can not be @c null.
         */
        inline WithParam(const QXmlName name,
                         const SequenceType::Ptr &type,
                         const Expression::Ptr &sourceExpression);

        inline void setSourceExpression(const Expression::Ptr &expr)
        {
            Q_ASSERT(expr);
            m_sourceExpression = expr;
        }

        /**
         * @short Returns the expression which is the source the value for this
         * parameter.
         *
         * Guaranteed to never be @c null.
         */
        inline Expression::Ptr sourceExpression() const
        {
            return m_sourceExpression;
        }

    private:
        Expression::Ptr m_sourceExpression;
    };

    WithParam::WithParam(const QXmlName name,
                         const SequenceType::Ptr &type,
                         const Expression::Ptr &sourceExpression) : FunctionArgument(name, type)
                                                                  , m_sourceExpression(sourceExpression)
    {
        Q_ASSERT(m_sourceExpression);
    }

}

QT_END_NAMESPACE

QT_END_HEADER

#endif
