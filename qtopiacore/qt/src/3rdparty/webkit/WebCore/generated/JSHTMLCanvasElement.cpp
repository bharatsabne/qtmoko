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

#include "JSHTMLCanvasElement.h"

#include <wtf/GetPtr.h>

#include "HTMLCanvasElement.h"
#include "JSCanvasRenderingContext2D.h"
#include "KURL.h"

#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <runtime/JSString.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLCanvasElement)

/* Hash table */

static const HashTableValue JSHTMLCanvasElementTableValues[4] =
{
    { "width", DontDelete, (intptr_t)jsHTMLCanvasElementWidth, (intptr_t)setJSHTMLCanvasElementWidth },
    { "height", DontDelete, (intptr_t)jsHTMLCanvasElementHeight, (intptr_t)setJSHTMLCanvasElementHeight },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsHTMLCanvasElementConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLCanvasElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 31, JSHTMLCanvasElementTableValues, 0 };
#else
    { 9, 7, JSHTMLCanvasElementTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSHTMLCanvasElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLCanvasElementConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSHTMLCanvasElementConstructorTableValues, 0 };
#else
    { 1, 0, JSHTMLCanvasElementConstructorTableValues, 0 };
#endif

class JSHTMLCanvasElementConstructor : public DOMObject {
public:
    JSHTMLCanvasElementConstructor(ExecState* exec)
        : DOMObject(JSHTMLCanvasElementConstructor::createStructure(exec->lexicalGlobalObject()->objectPrototype()))
    {
        putDirect(exec->propertyNames().prototype, JSHTMLCanvasElementPrototype::self(exec, exec->lexicalGlobalObject()), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValuePtr proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, ImplementsHasInstance)); 
    }
};

const ClassInfo JSHTMLCanvasElementConstructor::s_info = { "HTMLCanvasElementConstructor", 0, &JSHTMLCanvasElementConstructorTable, 0 };

bool JSHTMLCanvasElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLCanvasElementConstructor, DOMObject>(exec, &JSHTMLCanvasElementConstructorTable, this, propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLCanvasElementPrototypeTableValues[3] =
{
    { "toDataURL", DontDelete|Function, (intptr_t)jsHTMLCanvasElementPrototypeFunctionToDataURL, (intptr_t)1 },
    { "getContext", DontDelete|Function, (intptr_t)jsHTMLCanvasElementPrototypeFunctionGetContext, (intptr_t)1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLCanvasElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 3, JSHTMLCanvasElementPrototypeTableValues, 0 };
#else
    { 4, 3, JSHTMLCanvasElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSHTMLCanvasElementPrototype::s_info = { "HTMLCanvasElementPrototype", 0, &JSHTMLCanvasElementPrototypeTable, 0 };

JSObject* JSHTMLCanvasElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLCanvasElement>(exec, globalObject);
}

bool JSHTMLCanvasElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSHTMLCanvasElementPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSHTMLCanvasElement::s_info = { "HTMLCanvasElement", &JSHTMLElement::s_info, &JSHTMLCanvasElementTable, 0 };

JSHTMLCanvasElement::JSHTMLCanvasElement(PassRefPtr<Structure> structure, PassRefPtr<HTMLCanvasElement> impl)
    : JSHTMLElement(structure, impl)
{
}

JSObject* JSHTMLCanvasElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLCanvasElementPrototype(JSHTMLCanvasElementPrototype::createStructure(JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLCanvasElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLCanvasElement, Base>(exec, &JSHTMLCanvasElementTable, this, propertyName, slot);
}

JSValuePtr jsHTMLCanvasElementWidth(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    HTMLCanvasElement* imp = static_cast<HTMLCanvasElement*>(static_cast<JSHTMLCanvasElement*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->width());
}

JSValuePtr jsHTMLCanvasElementHeight(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    HTMLCanvasElement* imp = static_cast<HTMLCanvasElement*>(static_cast<JSHTMLCanvasElement*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->height());
}

JSValuePtr jsHTMLCanvasElementConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    return static_cast<JSHTMLCanvasElement*>(asObject(slot.slotBase()))->getConstructor(exec);
}
void JSHTMLCanvasElement::put(ExecState* exec, const Identifier& propertyName, JSValuePtr value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLCanvasElement, Base>(exec, propertyName, value, &JSHTMLCanvasElementTable, this, slot);
}

void setJSHTMLCanvasElementWidth(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    HTMLCanvasElement* imp = static_cast<HTMLCanvasElement*>(static_cast<JSHTMLCanvasElement*>(thisObject)->impl());
    imp->setWidth(value->toInt32(exec));
}

void setJSHTMLCanvasElementHeight(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    HTMLCanvasElement* imp = static_cast<HTMLCanvasElement*>(static_cast<JSHTMLCanvasElement*>(thisObject)->impl());
    imp->setHeight(value->toInt32(exec));
}

JSValuePtr JSHTMLCanvasElement::getConstructor(ExecState* exec)
{
    return getDOMConstructor<JSHTMLCanvasElementConstructor>(exec);
}

JSValuePtr jsHTMLCanvasElementPrototypeFunctionToDataURL(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSHTMLCanvasElement::s_info))
        return throwError(exec, TypeError);
    JSHTMLCanvasElement* castedThisObj = static_cast<JSHTMLCanvasElement*>(asObject(thisValue));
    HTMLCanvasElement* imp = static_cast<HTMLCanvasElement*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& type = valueToStringWithUndefinedOrNullCheck(exec, args.at(exec, 0));


    JSC::JSValuePtr result = jsString(exec, imp->toDataURL(type, ec));
    setDOMException(exec, ec);
    return result;
}

JSValuePtr jsHTMLCanvasElementPrototypeFunctionGetContext(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSHTMLCanvasElement::s_info))
        return throwError(exec, TypeError);
    JSHTMLCanvasElement* castedThisObj = static_cast<JSHTMLCanvasElement*>(asObject(thisValue));
    HTMLCanvasElement* imp = static_cast<HTMLCanvasElement*>(castedThisObj->impl());
    const UString& contextId = args.at(exec, 0)->toString(exec);


    JSC::JSValuePtr result = toJS(exec, WTF::getPtr(imp->getContext(contextId)));
    return result;
}


}
