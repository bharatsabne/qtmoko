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

#include "JSXMLHttpRequest.h"

#include <wtf/GetPtr.h>

#include "Document.h"
#include "Event.h"
#include "EventListener.h"
#include "Frame.h"
#include "JSDOMGlobalObject.h"
#include "JSDocument.h"
#include "JSEvent.h"
#include "JSEventListener.h"
#include "JSXMLHttpRequestUpload.h"
#include "KURL.h"
#include "XMLHttpRequest.h"
#include "XMLHttpRequestUpload.h"

#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <runtime/JSString.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSXMLHttpRequest)

/* Hash table */

static const HashTableValue JSXMLHttpRequestTableValues[13] =
{
    { "onabort", DontDelete, (intptr_t)jsXMLHttpRequestOnabort, (intptr_t)setJSXMLHttpRequestOnabort },
    { "onerror", DontDelete, (intptr_t)jsXMLHttpRequestOnerror, (intptr_t)setJSXMLHttpRequestOnerror },
    { "onload", DontDelete, (intptr_t)jsXMLHttpRequestOnload, (intptr_t)setJSXMLHttpRequestOnload },
    { "onloadstart", DontDelete, (intptr_t)jsXMLHttpRequestOnloadstart, (intptr_t)setJSXMLHttpRequestOnloadstart },
    { "onprogress", DontDelete, (intptr_t)jsXMLHttpRequestOnprogress, (intptr_t)setJSXMLHttpRequestOnprogress },
    { "onreadystatechange", DontDelete, (intptr_t)jsXMLHttpRequestOnreadystatechange, (intptr_t)setJSXMLHttpRequestOnreadystatechange },
    { "readyState", DontDelete|ReadOnly, (intptr_t)jsXMLHttpRequestReadyState, (intptr_t)0 },
    { "upload", DontDelete|ReadOnly, (intptr_t)jsXMLHttpRequestUpload, (intptr_t)0 },
    { "responseText", DontDelete|ReadOnly, (intptr_t)jsXMLHttpRequestResponseText, (intptr_t)0 },
    { "responseXML", DontDelete|ReadOnly, (intptr_t)jsXMLHttpRequestResponseXML, (intptr_t)0 },
    { "status", DontDelete|ReadOnly, (intptr_t)jsXMLHttpRequestStatus, (intptr_t)0 },
    { "statusText", DontDelete|ReadOnly, (intptr_t)jsXMLHttpRequestStatusText, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSXMLHttpRequestTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 127, JSXMLHttpRequestTableValues, 0 };
#else
    { 34, 31, JSXMLHttpRequestTableValues, 0 };
#endif

/* Hash table for prototype */

static const HashTableValue JSXMLHttpRequestPrototypeTableValues[16] =
{
    { "UNSENT", DontDelete|ReadOnly, (intptr_t)jsXMLHttpRequestUNSENT, (intptr_t)0 },
    { "OPENED", DontDelete|ReadOnly, (intptr_t)jsXMLHttpRequestOPENED, (intptr_t)0 },
    { "HEADERS_RECEIVED", DontDelete|ReadOnly, (intptr_t)jsXMLHttpRequestHEADERS_RECEIVED, (intptr_t)0 },
    { "LOADING", DontDelete|ReadOnly, (intptr_t)jsXMLHttpRequestLOADING, (intptr_t)0 },
    { "DONE", DontDelete|ReadOnly, (intptr_t)jsXMLHttpRequestDONE, (intptr_t)0 },
    { "open", DontDelete|Function, (intptr_t)jsXMLHttpRequestPrototypeFunctionOpen, (intptr_t)5 },
    { "setRequestHeader", DontDelete|Function, (intptr_t)jsXMLHttpRequestPrototypeFunctionSetRequestHeader, (intptr_t)2 },
    { "send", DontDelete|Function, (intptr_t)jsXMLHttpRequestPrototypeFunctionSend, (intptr_t)1 },
    { "abort", DontDelete|Function, (intptr_t)jsXMLHttpRequestPrototypeFunctionAbort, (intptr_t)0 },
    { "getAllResponseHeaders", DontDelete|Function, (intptr_t)jsXMLHttpRequestPrototypeFunctionGetAllResponseHeaders, (intptr_t)0 },
    { "getResponseHeader", DontDelete|Function, (intptr_t)jsXMLHttpRequestPrototypeFunctionGetResponseHeader, (intptr_t)1 },
    { "overrideMimeType", DontDelete|Function, (intptr_t)jsXMLHttpRequestPrototypeFunctionOverrideMimeType, (intptr_t)1 },
    { "addEventListener", DontDelete|Function, (intptr_t)jsXMLHttpRequestPrototypeFunctionAddEventListener, (intptr_t)3 },
    { "removeEventListener", DontDelete|Function, (intptr_t)jsXMLHttpRequestPrototypeFunctionRemoveEventListener, (intptr_t)3 },
    { "dispatchEvent", DontDelete|Function, (intptr_t)jsXMLHttpRequestPrototypeFunctionDispatchEvent, (intptr_t)1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSXMLHttpRequestPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 1023, JSXMLHttpRequestPrototypeTableValues, 0 };
#else
    { 37, 31, JSXMLHttpRequestPrototypeTableValues, 0 };
#endif

const ClassInfo JSXMLHttpRequestPrototype::s_info = { "XMLHttpRequestPrototype", 0, &JSXMLHttpRequestPrototypeTable, 0 };

JSObject* JSXMLHttpRequestPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSXMLHttpRequest>(exec, globalObject);
}

bool JSXMLHttpRequestPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSXMLHttpRequestPrototype, JSObject>(exec, &JSXMLHttpRequestPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSXMLHttpRequest::s_info = { "XMLHttpRequest", 0, &JSXMLHttpRequestTable, 0 };

JSXMLHttpRequest::JSXMLHttpRequest(PassRefPtr<Structure> structure, PassRefPtr<XMLHttpRequest> impl)
    : DOMObject(structure)
    , m_impl(impl)
{
}

JSXMLHttpRequest::~JSXMLHttpRequest()
{
    forgetDOMObject(*Heap::heap(this)->globalData(), m_impl.get());

}

JSObject* JSXMLHttpRequest::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSXMLHttpRequestPrototype(JSXMLHttpRequestPrototype::createStructure(globalObject->objectPrototype()));
}

bool JSXMLHttpRequest::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSXMLHttpRequest, Base>(exec, &JSXMLHttpRequestTable, this, propertyName, slot);
}

JSValuePtr jsXMLHttpRequestOnabort(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    XMLHttpRequest* imp = static_cast<XMLHttpRequest*>(static_cast<JSXMLHttpRequest*>(asObject(slot.slotBase()))->impl());
    if (JSUnprotectedEventListener* listener = static_cast<JSUnprotectedEventListener*>(imp->onabort())) {
        if (JSObject* listenerObj = listener->listenerObj())
            return listenerObj;
    }
    return jsNull();
}

JSValuePtr jsXMLHttpRequestOnerror(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    XMLHttpRequest* imp = static_cast<XMLHttpRequest*>(static_cast<JSXMLHttpRequest*>(asObject(slot.slotBase()))->impl());
    if (JSUnprotectedEventListener* listener = static_cast<JSUnprotectedEventListener*>(imp->onerror())) {
        if (JSObject* listenerObj = listener->listenerObj())
            return listenerObj;
    }
    return jsNull();
}

JSValuePtr jsXMLHttpRequestOnload(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    XMLHttpRequest* imp = static_cast<XMLHttpRequest*>(static_cast<JSXMLHttpRequest*>(asObject(slot.slotBase()))->impl());
    if (JSUnprotectedEventListener* listener = static_cast<JSUnprotectedEventListener*>(imp->onload())) {
        if (JSObject* listenerObj = listener->listenerObj())
            return listenerObj;
    }
    return jsNull();
}

JSValuePtr jsXMLHttpRequestOnloadstart(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    XMLHttpRequest* imp = static_cast<XMLHttpRequest*>(static_cast<JSXMLHttpRequest*>(asObject(slot.slotBase()))->impl());
    if (JSUnprotectedEventListener* listener = static_cast<JSUnprotectedEventListener*>(imp->onloadstart())) {
        if (JSObject* listenerObj = listener->listenerObj())
            return listenerObj;
    }
    return jsNull();
}

JSValuePtr jsXMLHttpRequestOnprogress(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    XMLHttpRequest* imp = static_cast<XMLHttpRequest*>(static_cast<JSXMLHttpRequest*>(asObject(slot.slotBase()))->impl());
    if (JSUnprotectedEventListener* listener = static_cast<JSUnprotectedEventListener*>(imp->onprogress())) {
        if (JSObject* listenerObj = listener->listenerObj())
            return listenerObj;
    }
    return jsNull();
}

JSValuePtr jsXMLHttpRequestOnreadystatechange(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    XMLHttpRequest* imp = static_cast<XMLHttpRequest*>(static_cast<JSXMLHttpRequest*>(asObject(slot.slotBase()))->impl());
    if (JSUnprotectedEventListener* listener = static_cast<JSUnprotectedEventListener*>(imp->onreadystatechange())) {
        if (JSObject* listenerObj = listener->listenerObj())
            return listenerObj;
    }
    return jsNull();
}

JSValuePtr jsXMLHttpRequestReadyState(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    XMLHttpRequest* imp = static_cast<XMLHttpRequest*>(static_cast<JSXMLHttpRequest*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->readyState());
}

JSValuePtr jsXMLHttpRequestUpload(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    XMLHttpRequest* imp = static_cast<XMLHttpRequest*>(static_cast<JSXMLHttpRequest*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->upload()));
}

JSValuePtr jsXMLHttpRequestResponseText(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    return static_cast<JSXMLHttpRequest*>(asObject(slot.slotBase()))->responseText(exec);
}

JSValuePtr jsXMLHttpRequestResponseXML(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    XMLHttpRequest* imp = static_cast<XMLHttpRequest*>(static_cast<JSXMLHttpRequest*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->responseXML()));
}

JSValuePtr jsXMLHttpRequestStatus(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    ExceptionCode ec = 0;
    XMLHttpRequest* imp = static_cast<XMLHttpRequest*>(static_cast<JSXMLHttpRequest*>(asObject(slot.slotBase()))->impl());
    JSC::JSValuePtr result = jsNumber(exec, imp->status(ec));
    setDOMException(exec, ec);
    return result;
}

JSValuePtr jsXMLHttpRequestStatusText(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    ExceptionCode ec = 0;
    XMLHttpRequest* imp = static_cast<XMLHttpRequest*>(static_cast<JSXMLHttpRequest*>(asObject(slot.slotBase()))->impl());
    JSC::JSValuePtr result = jsString(exec, imp->statusText(ec));
    setDOMException(exec, ec);
    return result;
}

void JSXMLHttpRequest::put(ExecState* exec, const Identifier& propertyName, JSValuePtr value, PutPropertySlot& slot)
{
    lookupPut<JSXMLHttpRequest, Base>(exec, propertyName, value, &JSXMLHttpRequestTable, this, slot);
}

void setJSXMLHttpRequestOnabort(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    XMLHttpRequest* imp = static_cast<XMLHttpRequest*>(static_cast<JSXMLHttpRequest*>(thisObject)->impl());
    JSDOMGlobalObject* globalObject = toJSDOMGlobalObject(imp->scriptExecutionContext());
    if (!globalObject)
        return;
    imp->setOnabort(globalObject->findOrCreateJSUnprotectedEventListener(exec, value, true));
}

void setJSXMLHttpRequestOnerror(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    XMLHttpRequest* imp = static_cast<XMLHttpRequest*>(static_cast<JSXMLHttpRequest*>(thisObject)->impl());
    JSDOMGlobalObject* globalObject = toJSDOMGlobalObject(imp->scriptExecutionContext());
    if (!globalObject)
        return;
    imp->setOnerror(globalObject->findOrCreateJSUnprotectedEventListener(exec, value, true));
}

void setJSXMLHttpRequestOnload(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    XMLHttpRequest* imp = static_cast<XMLHttpRequest*>(static_cast<JSXMLHttpRequest*>(thisObject)->impl());
    JSDOMGlobalObject* globalObject = toJSDOMGlobalObject(imp->scriptExecutionContext());
    if (!globalObject)
        return;
    imp->setOnload(globalObject->findOrCreateJSUnprotectedEventListener(exec, value, true));
}

void setJSXMLHttpRequestOnloadstart(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    XMLHttpRequest* imp = static_cast<XMLHttpRequest*>(static_cast<JSXMLHttpRequest*>(thisObject)->impl());
    JSDOMGlobalObject* globalObject = toJSDOMGlobalObject(imp->scriptExecutionContext());
    if (!globalObject)
        return;
    imp->setOnloadstart(globalObject->findOrCreateJSUnprotectedEventListener(exec, value, true));
}

void setJSXMLHttpRequestOnprogress(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    XMLHttpRequest* imp = static_cast<XMLHttpRequest*>(static_cast<JSXMLHttpRequest*>(thisObject)->impl());
    JSDOMGlobalObject* globalObject = toJSDOMGlobalObject(imp->scriptExecutionContext());
    if (!globalObject)
        return;
    imp->setOnprogress(globalObject->findOrCreateJSUnprotectedEventListener(exec, value, true));
}

void setJSXMLHttpRequestOnreadystatechange(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    XMLHttpRequest* imp = static_cast<XMLHttpRequest*>(static_cast<JSXMLHttpRequest*>(thisObject)->impl());
    JSDOMGlobalObject* globalObject = toJSDOMGlobalObject(imp->scriptExecutionContext());
    if (!globalObject)
        return;
    imp->setOnreadystatechange(globalObject->findOrCreateJSUnprotectedEventListener(exec, value, true));
}

JSValuePtr jsXMLHttpRequestPrototypeFunctionOpen(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSXMLHttpRequest::s_info))
        return throwError(exec, TypeError);
    JSXMLHttpRequest* castedThisObj = static_cast<JSXMLHttpRequest*>(asObject(thisValue));
    return castedThisObj->open(exec, args);
}

JSValuePtr jsXMLHttpRequestPrototypeFunctionSetRequestHeader(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSXMLHttpRequest::s_info))
        return throwError(exec, TypeError);
    JSXMLHttpRequest* castedThisObj = static_cast<JSXMLHttpRequest*>(asObject(thisValue));
    return castedThisObj->setRequestHeader(exec, args);
}

JSValuePtr jsXMLHttpRequestPrototypeFunctionSend(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSXMLHttpRequest::s_info))
        return throwError(exec, TypeError);
    JSXMLHttpRequest* castedThisObj = static_cast<JSXMLHttpRequest*>(asObject(thisValue));
    return castedThisObj->send(exec, args);
}

JSValuePtr jsXMLHttpRequestPrototypeFunctionAbort(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSXMLHttpRequest::s_info))
        return throwError(exec, TypeError);
    JSXMLHttpRequest* castedThisObj = static_cast<JSXMLHttpRequest*>(asObject(thisValue));
    XMLHttpRequest* imp = static_cast<XMLHttpRequest*>(castedThisObj->impl());

    imp->abort();
    return jsUndefined();
}

JSValuePtr jsXMLHttpRequestPrototypeFunctionGetAllResponseHeaders(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSXMLHttpRequest::s_info))
        return throwError(exec, TypeError);
    JSXMLHttpRequest* castedThisObj = static_cast<JSXMLHttpRequest*>(asObject(thisValue));
    XMLHttpRequest* imp = static_cast<XMLHttpRequest*>(castedThisObj->impl());
    ExceptionCode ec = 0;


    JSC::JSValuePtr result = jsStringOrUndefined(exec, imp->getAllResponseHeaders(ec));
    setDOMException(exec, ec);
    return result;
}

JSValuePtr jsXMLHttpRequestPrototypeFunctionGetResponseHeader(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSXMLHttpRequest::s_info))
        return throwError(exec, TypeError);
    JSXMLHttpRequest* castedThisObj = static_cast<JSXMLHttpRequest*>(asObject(thisValue));
    return castedThisObj->getResponseHeader(exec, args);
}

JSValuePtr jsXMLHttpRequestPrototypeFunctionOverrideMimeType(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSXMLHttpRequest::s_info))
        return throwError(exec, TypeError);
    JSXMLHttpRequest* castedThisObj = static_cast<JSXMLHttpRequest*>(asObject(thisValue));
    return castedThisObj->overrideMimeType(exec, args);
}

JSValuePtr jsXMLHttpRequestPrototypeFunctionAddEventListener(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSXMLHttpRequest::s_info))
        return throwError(exec, TypeError);
    JSXMLHttpRequest* castedThisObj = static_cast<JSXMLHttpRequest*>(asObject(thisValue));
    return castedThisObj->addEventListener(exec, args);
}

JSValuePtr jsXMLHttpRequestPrototypeFunctionRemoveEventListener(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSXMLHttpRequest::s_info))
        return throwError(exec, TypeError);
    JSXMLHttpRequest* castedThisObj = static_cast<JSXMLHttpRequest*>(asObject(thisValue));
    return castedThisObj->removeEventListener(exec, args);
}

JSValuePtr jsXMLHttpRequestPrototypeFunctionDispatchEvent(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSXMLHttpRequest::s_info))
        return throwError(exec, TypeError);
    JSXMLHttpRequest* castedThisObj = static_cast<JSXMLHttpRequest*>(asObject(thisValue));
    XMLHttpRequest* imp = static_cast<XMLHttpRequest*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Event* evt = toEvent(args.at(exec, 0));


    JSC::JSValuePtr result = jsBoolean(imp->dispatchEvent(evt, ec));
    setDOMException(exec, ec);
    return result;
}

// Constant getters

JSValuePtr jsXMLHttpRequestUNSENT(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(0));
}

JSValuePtr jsXMLHttpRequestOPENED(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(1));
}

JSValuePtr jsXMLHttpRequestHEADERS_RECEIVED(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(2));
}

JSValuePtr jsXMLHttpRequestLOADING(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(3));
}

JSValuePtr jsXMLHttpRequestDONE(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(4));
}

JSC::JSValuePtr toJS(JSC::ExecState* exec, XMLHttpRequest* object)
{
    return getDOMObjectWrapper<JSXMLHttpRequest>(exec, object);
}
XMLHttpRequest* toXMLHttpRequest(JSC::JSValuePtr value)
{
    return value->isObject(&JSXMLHttpRequest::s_info) ? static_cast<JSXMLHttpRequest*>(asObject(value))->impl() : 0;
}

}
