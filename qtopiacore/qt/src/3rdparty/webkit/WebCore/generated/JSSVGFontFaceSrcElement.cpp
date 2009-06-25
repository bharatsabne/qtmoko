/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"


#if ENABLE(SVG) && ENABLE(SVG_FONTS)

#include "SVGElement.h"
#include "JSSVGFontFaceSrcElement.h"

#include <wtf/GetPtr.h>

#include "SVGFontFaceSrcElement.h"


using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGFontFaceSrcElement)

/* Hash table for prototype */

static const HashTableValue JSSVGFontFaceSrcElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGFontFaceSrcElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGFontFaceSrcElementPrototypeTableValues, 0 };
#else
    { 1, 0, JSSVGFontFaceSrcElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGFontFaceSrcElementPrototype::s_info = { "SVGFontFaceSrcElementPrototype", 0, &JSSVGFontFaceSrcElementPrototypeTable, 0 };

JSObject* JSSVGFontFaceSrcElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFontFaceSrcElement>(exec, globalObject);
}

const ClassInfo JSSVGFontFaceSrcElement::s_info = { "SVGFontFaceSrcElement", &JSSVGElement::s_info, 0, 0 };

JSSVGFontFaceSrcElement::JSSVGFontFaceSrcElement(PassRefPtr<Structure> structure, PassRefPtr<SVGFontFaceSrcElement> impl)
    : JSSVGElement(structure, impl)
{
}

JSObject* JSSVGFontFaceSrcElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGFontFaceSrcElementPrototype(JSSVGFontFaceSrcElementPrototype::createStructure(JSSVGElementPrototype::self(exec, globalObject)));
}


}

#endif // ENABLE(SVG) && ENABLE(SVG_FONTS)
