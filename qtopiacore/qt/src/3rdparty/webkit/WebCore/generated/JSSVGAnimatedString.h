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

#ifndef JSSVGAnimatedString_h
#define JSSVGAnimatedString_h


#if ENABLE(SVG)

#include "JSDOMBinding.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSSVGAnimatedString : public DOMObject {
    typedef DOMObject Base;
public:
    JSSVGAnimatedString(PassRefPtr<JSC::Structure>, PassRefPtr<SVGAnimatedString>, SVGElement* context);
    virtual ~JSSVGAnimatedString();
    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValuePtr, JSC::PutPropertySlot&);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValuePtr prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType));
    }

    SVGAnimatedString* impl() const { return m_impl.get(); }
    SVGElement* context() const { return m_context.get(); }

private:
    RefPtr<SVGElement> m_context;
    RefPtr<SVGAnimatedString > m_impl;
};

JSC::JSValuePtr toJS(JSC::ExecState*, SVGAnimatedString*, SVGElement* context);
SVGAnimatedString* toSVGAnimatedString(JSC::JSValuePtr);

class JSSVGAnimatedStringPrototype : public JSC::JSObject {
public:
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    JSSVGAnimatedStringPrototype(PassRefPtr<JSC::Structure> structure) : JSC::JSObject(structure) { }
};

// Attributes

JSC::JSValuePtr jsSVGAnimatedStringBaseVal(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSSVGAnimatedStringBaseVal(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsSVGAnimatedStringAnimVal(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);

} // namespace WebCore

#endif // ENABLE(SVG)

#endif
