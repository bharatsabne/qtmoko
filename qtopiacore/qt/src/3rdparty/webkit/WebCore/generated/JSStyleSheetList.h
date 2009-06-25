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

#ifndef JSStyleSheetList_h
#define JSStyleSheetList_h

#include "JSDOMBinding.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class StyleSheetList;

class JSStyleSheetList : public DOMObject {
    typedef DOMObject Base;
public:
    JSStyleSheetList(PassRefPtr<JSC::Structure>, PassRefPtr<StyleSheetList>);
    virtual ~JSStyleSheetList();
    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertySlot(JSC::ExecState*, unsigned propertyName, JSC::PropertySlot&);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValuePtr prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType));
    }

    virtual void getPropertyNames(JSC::ExecState*, JSC::PropertyNameArray&);
    static JSC::JSValuePtr getConstructor(JSC::ExecState*);
    StyleSheetList* impl() const { return m_impl.get(); }

private:
    RefPtr<StyleSheetList> m_impl;
    static JSC::JSValuePtr indexGetter(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
private:
    static bool canGetItemsForName(JSC::ExecState*, StyleSheetList*, const JSC::Identifier&);
    static JSC::JSValuePtr nameGetter(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
};

JSC::JSValuePtr toJS(JSC::ExecState*, StyleSheetList*);
StyleSheetList* toStyleSheetList(JSC::JSValuePtr);

class JSStyleSheetListPrototype : public JSC::JSObject {
public:
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValuePtr prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType));
    }
    JSStyleSheetListPrototype(PassRefPtr<JSC::Structure> structure) : JSC::JSObject(structure) { }
};

// Functions

JSC::JSValuePtr jsStyleSheetListPrototypeFunctionItem(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr, const JSC::ArgList&);
// Attributes

JSC::JSValuePtr jsStyleSheetListLength(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValuePtr jsStyleSheetListConstructor(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);

} // namespace WebCore

#endif
