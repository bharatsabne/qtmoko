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

#include "JSHTMLElement.h"

#include <wtf/GetPtr.h>

#include "Element.h"
#include "HTMLCollection.h"
#include "HTMLElement.h"
#include "JSElement.h"
#include "JSHTMLCollection.h"
#include "KURL.h"

#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <runtime/JSString.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLElement)

/* Hash table */

static const HashTableValue JSHTMLElementTableValues[15] =
{
    { "id", DontDelete, (intptr_t)jsHTMLElementId, (intptr_t)setJSHTMLElementId },
    { "title", DontDelete, (intptr_t)jsHTMLElementTitle, (intptr_t)setJSHTMLElementTitle },
    { "lang", DontDelete, (intptr_t)jsHTMLElementLang, (intptr_t)setJSHTMLElementLang },
    { "dir", DontDelete, (intptr_t)jsHTMLElementDir, (intptr_t)setJSHTMLElementDir },
    { "className", DontDelete, (intptr_t)jsHTMLElementClassName, (intptr_t)setJSHTMLElementClassName },
    { "tabIndex", DontDelete, (intptr_t)jsHTMLElementTabIndex, (intptr_t)setJSHTMLElementTabIndex },
    { "innerHTML", DontDelete, (intptr_t)jsHTMLElementInnerHTML, (intptr_t)setJSHTMLElementInnerHTML },
    { "innerText", DontDelete, (intptr_t)jsHTMLElementInnerText, (intptr_t)setJSHTMLElementInnerText },
    { "outerHTML", DontDelete, (intptr_t)jsHTMLElementOuterHTML, (intptr_t)setJSHTMLElementOuterHTML },
    { "outerText", DontDelete, (intptr_t)jsHTMLElementOuterText, (intptr_t)setJSHTMLElementOuterText },
    { "children", DontDelete|ReadOnly, (intptr_t)jsHTMLElementChildren, (intptr_t)0 },
    { "contentEditable", DontDelete, (intptr_t)jsHTMLElementContentEditable, (intptr_t)setJSHTMLElementContentEditable },
    { "isContentEditable", DontDelete|ReadOnly, (intptr_t)jsHTMLElementIsContentEditable, (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsHTMLElementConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 511, JSHTMLElementTableValues, 0 };
#else
    { 34, 31, JSHTMLElementTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSHTMLElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLElementConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSHTMLElementConstructorTableValues, 0 };
#else
    { 1, 0, JSHTMLElementConstructorTableValues, 0 };
#endif

class JSHTMLElementConstructor : public DOMObject {
public:
    JSHTMLElementConstructor(ExecState* exec)
        : DOMObject(JSHTMLElementConstructor::createStructure(exec->lexicalGlobalObject()->objectPrototype()))
    {
        putDirect(exec->propertyNames().prototype, JSHTMLElementPrototype::self(exec, exec->lexicalGlobalObject()), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValuePtr proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, ImplementsHasInstance)); 
    }
};

const ClassInfo JSHTMLElementConstructor::s_info = { "HTMLElementConstructor", 0, &JSHTMLElementConstructorTable, 0 };

bool JSHTMLElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLElementConstructor, DOMObject>(exec, &JSHTMLElementConstructorTable, this, propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLElementPrototypeTableValues[6] =
{
    { "blur", DontDelete|Function, (intptr_t)jsHTMLElementPrototypeFunctionBlur, (intptr_t)0 },
    { "focus", DontDelete|Function, (intptr_t)jsHTMLElementPrototypeFunctionFocus, (intptr_t)0 },
    { "insertAdjacentElement", DontDelete|Function, (intptr_t)jsHTMLElementPrototypeFunctionInsertAdjacentElement, (intptr_t)2 },
    { "insertAdjacentHTML", DontDelete|Function, (intptr_t)jsHTMLElementPrototypeFunctionInsertAdjacentHTML, (intptr_t)2 },
    { "insertAdjacentText", DontDelete|Function, (intptr_t)jsHTMLElementPrototypeFunctionInsertAdjacentText, (intptr_t)2 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 7, JSHTMLElementPrototypeTableValues, 0 };
#else
    { 16, 15, JSHTMLElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSHTMLElementPrototype::s_info = { "HTMLElementPrototype", 0, &JSHTMLElementPrototypeTable, 0 };

JSObject* JSHTMLElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLElement>(exec, globalObject);
}

bool JSHTMLElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSHTMLElementPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSHTMLElement::s_info = { "HTMLElement", &JSElement::s_info, &JSHTMLElementTable, 0 };

JSHTMLElement::JSHTMLElement(PassRefPtr<Structure> structure, PassRefPtr<HTMLElement> impl)
    : JSElement(structure, impl)
{
}

JSObject* JSHTMLElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLElementPrototype(JSHTMLElementPrototype::createStructure(JSElementPrototype::self(exec, globalObject)));
}

bool JSHTMLElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLElement, Base>(exec, &JSHTMLElementTable, this, propertyName, slot);
}

JSValuePtr jsHTMLElementId(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    HTMLElement* imp = static_cast<HTMLElement*>(static_cast<JSHTMLElement*>(asObject(slot.slotBase()))->impl());
    return jsString(exec, imp->id());
}

JSValuePtr jsHTMLElementTitle(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    HTMLElement* imp = static_cast<HTMLElement*>(static_cast<JSHTMLElement*>(asObject(slot.slotBase()))->impl());
    return jsString(exec, imp->title());
}

JSValuePtr jsHTMLElementLang(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    HTMLElement* imp = static_cast<HTMLElement*>(static_cast<JSHTMLElement*>(asObject(slot.slotBase()))->impl());
    return jsString(exec, imp->lang());
}

JSValuePtr jsHTMLElementDir(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    HTMLElement* imp = static_cast<HTMLElement*>(static_cast<JSHTMLElement*>(asObject(slot.slotBase()))->impl());
    return jsString(exec, imp->dir());
}

JSValuePtr jsHTMLElementClassName(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    HTMLElement* imp = static_cast<HTMLElement*>(static_cast<JSHTMLElement*>(asObject(slot.slotBase()))->impl());
    return jsString(exec, imp->className());
}

JSValuePtr jsHTMLElementTabIndex(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    HTMLElement* imp = static_cast<HTMLElement*>(static_cast<JSHTMLElement*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->tabIndex());
}

JSValuePtr jsHTMLElementInnerHTML(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    HTMLElement* imp = static_cast<HTMLElement*>(static_cast<JSHTMLElement*>(asObject(slot.slotBase()))->impl());
    return jsString(exec, imp->innerHTML());
}

JSValuePtr jsHTMLElementInnerText(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    HTMLElement* imp = static_cast<HTMLElement*>(static_cast<JSHTMLElement*>(asObject(slot.slotBase()))->impl());
    return jsString(exec, imp->innerText());
}

JSValuePtr jsHTMLElementOuterHTML(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    HTMLElement* imp = static_cast<HTMLElement*>(static_cast<JSHTMLElement*>(asObject(slot.slotBase()))->impl());
    return jsString(exec, imp->outerHTML());
}

JSValuePtr jsHTMLElementOuterText(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    HTMLElement* imp = static_cast<HTMLElement*>(static_cast<JSHTMLElement*>(asObject(slot.slotBase()))->impl());
    return jsString(exec, imp->outerText());
}

JSValuePtr jsHTMLElementChildren(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    HTMLElement* imp = static_cast<HTMLElement*>(static_cast<JSHTMLElement*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->children()));
}

JSValuePtr jsHTMLElementContentEditable(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    HTMLElement* imp = static_cast<HTMLElement*>(static_cast<JSHTMLElement*>(asObject(slot.slotBase()))->impl());
    return jsString(exec, imp->contentEditable());
}

JSValuePtr jsHTMLElementIsContentEditable(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    HTMLElement* imp = static_cast<HTMLElement*>(static_cast<JSHTMLElement*>(asObject(slot.slotBase()))->impl());
    return jsBoolean(imp->isContentEditable());
}

JSValuePtr jsHTMLElementConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    return static_cast<JSHTMLElement*>(asObject(slot.slotBase()))->getConstructor(exec);
}
void JSHTMLElement::put(ExecState* exec, const Identifier& propertyName, JSValuePtr value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLElement, Base>(exec, propertyName, value, &JSHTMLElementTable, this, slot);
}

void setJSHTMLElementId(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    HTMLElement* imp = static_cast<HTMLElement*>(static_cast<JSHTMLElement*>(thisObject)->impl());
    imp->setId(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLElementTitle(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    HTMLElement* imp = static_cast<HTMLElement*>(static_cast<JSHTMLElement*>(thisObject)->impl());
    imp->setTitle(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLElementLang(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    HTMLElement* imp = static_cast<HTMLElement*>(static_cast<JSHTMLElement*>(thisObject)->impl());
    imp->setLang(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLElementDir(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    HTMLElement* imp = static_cast<HTMLElement*>(static_cast<JSHTMLElement*>(thisObject)->impl());
    imp->setDir(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLElementClassName(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    HTMLElement* imp = static_cast<HTMLElement*>(static_cast<JSHTMLElement*>(thisObject)->impl());
    imp->setClassName(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLElementTabIndex(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    HTMLElement* imp = static_cast<HTMLElement*>(static_cast<JSHTMLElement*>(thisObject)->impl());
    imp->setTabIndex(value->toInt32(exec));
}

void setJSHTMLElementInnerHTML(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    HTMLElement* imp = static_cast<HTMLElement*>(static_cast<JSHTMLElement*>(thisObject)->impl());
    ExceptionCode ec = 0;
    imp->setInnerHTML(valueToStringWithNullCheck(exec, value), ec);
    setDOMException(exec, ec);
}

void setJSHTMLElementInnerText(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    HTMLElement* imp = static_cast<HTMLElement*>(static_cast<JSHTMLElement*>(thisObject)->impl());
    ExceptionCode ec = 0;
    imp->setInnerText(valueToStringWithNullCheck(exec, value), ec);
    setDOMException(exec, ec);
}

void setJSHTMLElementOuterHTML(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    HTMLElement* imp = static_cast<HTMLElement*>(static_cast<JSHTMLElement*>(thisObject)->impl());
    ExceptionCode ec = 0;
    imp->setOuterHTML(valueToStringWithNullCheck(exec, value), ec);
    setDOMException(exec, ec);
}

void setJSHTMLElementOuterText(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    HTMLElement* imp = static_cast<HTMLElement*>(static_cast<JSHTMLElement*>(thisObject)->impl());
    ExceptionCode ec = 0;
    imp->setOuterText(valueToStringWithNullCheck(exec, value), ec);
    setDOMException(exec, ec);
}

void setJSHTMLElementContentEditable(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    HTMLElement* imp = static_cast<HTMLElement*>(static_cast<JSHTMLElement*>(thisObject)->impl());
    imp->setContentEditable(valueToStringWithNullCheck(exec, value));
}

JSValuePtr JSHTMLElement::getConstructor(ExecState* exec)
{
    return getDOMConstructor<JSHTMLElementConstructor>(exec);
}

JSValuePtr jsHTMLElementPrototypeFunctionBlur(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSHTMLElement::s_info))
        return throwError(exec, TypeError);
    JSHTMLElement* castedThisObj = static_cast<JSHTMLElement*>(asObject(thisValue));
    HTMLElement* imp = static_cast<HTMLElement*>(castedThisObj->impl());

    imp->blur();
    return jsUndefined();
}

JSValuePtr jsHTMLElementPrototypeFunctionFocus(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSHTMLElement::s_info))
        return throwError(exec, TypeError);
    JSHTMLElement* castedThisObj = static_cast<JSHTMLElement*>(asObject(thisValue));
    HTMLElement* imp = static_cast<HTMLElement*>(castedThisObj->impl());

    imp->focus();
    return jsUndefined();
}

JSValuePtr jsHTMLElementPrototypeFunctionInsertAdjacentElement(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSHTMLElement::s_info))
        return throwError(exec, TypeError);
    JSHTMLElement* castedThisObj = static_cast<JSHTMLElement*>(asObject(thisValue));
    HTMLElement* imp = static_cast<HTMLElement*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& where = args.at(exec, 0)->toString(exec);
    Element* element = toElement(args.at(exec, 1));


    JSC::JSValuePtr result = toJS(exec, WTF::getPtr(imp->insertAdjacentElement(where, element, ec)));
    setDOMException(exec, ec);
    return result;
}

JSValuePtr jsHTMLElementPrototypeFunctionInsertAdjacentHTML(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSHTMLElement::s_info))
        return throwError(exec, TypeError);
    JSHTMLElement* castedThisObj = static_cast<JSHTMLElement*>(asObject(thisValue));
    HTMLElement* imp = static_cast<HTMLElement*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& where = args.at(exec, 0)->toString(exec);
    const UString& html = args.at(exec, 1)->toString(exec);

    imp->insertAdjacentHTML(where, html, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValuePtr jsHTMLElementPrototypeFunctionInsertAdjacentText(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSHTMLElement::s_info))
        return throwError(exec, TypeError);
    JSHTMLElement* castedThisObj = static_cast<JSHTMLElement*>(asObject(thisValue));
    HTMLElement* imp = static_cast<HTMLElement*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& where = args.at(exec, 0)->toString(exec);
    const UString& text = args.at(exec, 1)->toString(exec);

    imp->insertAdjacentText(where, text, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

HTMLElement* toHTMLElement(JSC::JSValuePtr value)
{
    return value->isObject(&JSHTMLElement::s_info) ? static_cast<JSHTMLElement*>(asObject(value))->impl() : 0;
}

}
