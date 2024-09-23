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
#include "JSPerformanceObserverEntryList.h"

#include "ActiveDOMObject.h"
#include "ExtendedDOMClientIsoSubspaces.h"
#include "ExtendedDOMIsoSubspaces.h"
#include "JSDOMBinding.h"
#include "JSDOMConstructorNotConstructable.h"
#include "JSDOMConvertInterface.h"
#include "JSDOMConvertSequences.h"
#include "JSDOMConvertStrings.h"
#include "JSDOMExceptionHandling.h"
#include "JSDOMGlobalObject.h"
#include "JSDOMGlobalObjectInlines.h"
#include "JSDOMOperation.h"
#include "JSDOMWrapperCache.h"
#include "JSPerformanceEntry.h"
#include "ScriptExecutionContext.h"
#include "WebCoreJSClientData.h"
#include <JavaScriptCore/FunctionPrototype.h>
#include <JavaScriptCore/HeapAnalyzer.h>
#include <JavaScriptCore/JSArray.h>
#include <JavaScriptCore/JSCInlines.h>
#include <JavaScriptCore/JSDestructibleObjectHeapCellType.h>
#include <JavaScriptCore/SlotVisitorMacros.h>
#include <JavaScriptCore/SubspaceInlines.h>
#include <wtf/GetPtr.h>
#include <wtf/PointerPreparations.h>
#include <wtf/URL.h>

namespace WebCore {
using namespace JSC;

// Functions

static JSC_DECLARE_HOST_FUNCTION(jsPerformanceObserverEntryListPrototypeFunction_getEntries);
static JSC_DECLARE_HOST_FUNCTION(jsPerformanceObserverEntryListPrototypeFunction_getEntriesByType);
static JSC_DECLARE_HOST_FUNCTION(jsPerformanceObserverEntryListPrototypeFunction_getEntriesByName);

// Attributes

static JSC_DECLARE_CUSTOM_GETTER(jsPerformanceObserverEntryListConstructor);

class JSPerformanceObserverEntryListPrototype final : public JSC::JSNonFinalObject {
public:
    using Base = JSC::JSNonFinalObject;
    static JSPerformanceObserverEntryListPrototype* create(JSC::VM& vm, JSDOMGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSPerformanceObserverEntryListPrototype* ptr = new (NotNull, JSC::allocateCell<JSPerformanceObserverEntryListPrototype>(vm)) JSPerformanceObserverEntryListPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    template<typename CellType, JSC::SubspaceAccess>
    static JSC::GCClient::IsoSubspace* subspaceFor(JSC::VM& vm)
    {
        STATIC_ASSERT_ISO_SUBSPACE_SHARABLE(JSPerformanceObserverEntryListPrototype, Base);
        return &vm.plainObjectSpace();
    }
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSPerformanceObserverEntryListPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};
STATIC_ASSERT_ISO_SUBSPACE_SHARABLE(JSPerformanceObserverEntryListPrototype, JSPerformanceObserverEntryListPrototype::Base);

using JSPerformanceObserverEntryListDOMConstructor = JSDOMConstructorNotConstructable<JSPerformanceObserverEntryList>;

template<> const ClassInfo JSPerformanceObserverEntryListDOMConstructor::s_info = { "PerformanceObserverEntryList"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSPerformanceObserverEntryListDOMConstructor) };

template<> JSValue JSPerformanceObserverEntryListDOMConstructor::prototypeForStructure(JSC::VM& vm, const JSDOMGlobalObject& globalObject)
{
    UNUSED_PARAM(vm);
    return globalObject.functionPrototype();
}

template<> void JSPerformanceObserverEntryListDOMConstructor::initializeProperties(VM& vm, JSDOMGlobalObject& globalObject)
{
    putDirect(vm, vm.propertyNames->length, jsNumber(0), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    JSString* nameString = jsNontrivialString(vm, "PerformanceObserverEntryList"_s);
    m_originalName.set(vm, this, nameString);
    putDirect(vm, vm.propertyNames->name, nameString, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    putDirect(vm, vm.propertyNames->prototype, JSPerformanceObserverEntryList::prototype(vm, globalObject), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum | JSC::PropertyAttribute::DontDelete);
}

/* Hash table for prototype */

static const HashTableValue JSPerformanceObserverEntryListPrototypeTableValues[] = {
    { "constructor"_s, static_cast<unsigned>(PropertyAttribute::DontEnum), NoIntrinsic, { HashTableValue::GetterSetterType, jsPerformanceObserverEntryListConstructor, 0 } },
    { "getEntries"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, jsPerformanceObserverEntryListPrototypeFunction_getEntries, 0 } },
    { "getEntriesByType"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, jsPerformanceObserverEntryListPrototypeFunction_getEntriesByType, 1 } },
    { "getEntriesByName"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, jsPerformanceObserverEntryListPrototypeFunction_getEntriesByName, 1 } },
};

const ClassInfo JSPerformanceObserverEntryListPrototype::s_info = { "PerformanceObserverEntryList"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSPerformanceObserverEntryListPrototype) };

void JSPerformanceObserverEntryListPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSPerformanceObserverEntryList::info(), JSPerformanceObserverEntryListPrototypeTableValues, *this);
    JSC_TO_STRING_TAG_WITHOUT_TRANSITION();
}

const ClassInfo JSPerformanceObserverEntryList::s_info = { "PerformanceObserverEntryList"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSPerformanceObserverEntryList) };

JSPerformanceObserverEntryList::JSPerformanceObserverEntryList(Structure* structure, JSDOMGlobalObject& globalObject, Ref<PerformanceObserverEntryList>&& impl)
    : JSDOMWrapper<PerformanceObserverEntryList>(structure, globalObject, WTFMove(impl))
{
}

// static_assert(!std::is_base_of<ActiveDOMObject, PerformanceObserverEntryList>::value, "Interface is not marked as [ActiveDOMObject] even though implementation class subclasses ActiveDOMObject.");

JSObject* JSPerformanceObserverEntryList::createPrototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    auto* structure = JSPerformanceObserverEntryListPrototype::createStructure(vm, &globalObject, globalObject.objectPrototype());
    structure->setMayBePrototype(true);
    return JSPerformanceObserverEntryListPrototype::create(vm, &globalObject, structure);
}

JSObject* JSPerformanceObserverEntryList::prototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    return getDOMPrototype<JSPerformanceObserverEntryList>(vm, globalObject);
}

JSValue JSPerformanceObserverEntryList::getConstructor(VM& vm, const JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSPerformanceObserverEntryListDOMConstructor, DOMConstructorID::PerformanceObserverEntryList>(vm, *jsCast<const JSDOMGlobalObject*>(globalObject));
}

void JSPerformanceObserverEntryList::destroy(JSC::JSCell* cell)
{
    JSPerformanceObserverEntryList* thisObject = static_cast<JSPerformanceObserverEntryList*>(cell);
    thisObject->JSPerformanceObserverEntryList::~JSPerformanceObserverEntryList();
}

JSC_DEFINE_CUSTOM_GETTER(jsPerformanceObserverEntryListConstructor, (JSGlobalObject * lexicalGlobalObject, EncodedJSValue thisValue, PropertyName))
{
    VM& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* prototype = jsDynamicCast<JSPerformanceObserverEntryListPrototype*>(JSValue::decode(thisValue));
    if (UNLIKELY(!prototype))
        return throwVMTypeError(lexicalGlobalObject, throwScope);
    return JSValue::encode(JSPerformanceObserverEntryList::getConstructor(JSC::getVM(lexicalGlobalObject), prototype->globalObject()));
}

static inline JSC::EncodedJSValue jsPerformanceObserverEntryListPrototypeFunction_getEntriesBody(JSC::JSGlobalObject* lexicalGlobalObject, JSC::CallFrame* callFrame, typename IDLOperation<JSPerformanceObserverEntryList>::ClassParameter castedThis)
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    UNUSED_PARAM(throwScope);
    UNUSED_PARAM(callFrame);
    auto& impl = castedThis->wrapped();
    RELEASE_AND_RETURN(throwScope, JSValue::encode(toJS<IDLSequence<IDLInterface<PerformanceEntry>>>(*lexicalGlobalObject, *castedThis->globalObject(), throwScope, impl.getEntries())));
}

JSC_DEFINE_HOST_FUNCTION(jsPerformanceObserverEntryListPrototypeFunction_getEntries, (JSGlobalObject * lexicalGlobalObject, CallFrame* callFrame))
{
    return IDLOperation<JSPerformanceObserverEntryList>::call<jsPerformanceObserverEntryListPrototypeFunction_getEntriesBody>(*lexicalGlobalObject, *callFrame, "getEntries");
}

static inline JSC::EncodedJSValue jsPerformanceObserverEntryListPrototypeFunction_getEntriesByTypeBody(JSC::JSGlobalObject* lexicalGlobalObject, JSC::CallFrame* callFrame, typename IDLOperation<JSPerformanceObserverEntryList>::ClassParameter castedThis)
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    UNUSED_PARAM(throwScope);
    UNUSED_PARAM(callFrame);
    auto& impl = castedThis->wrapped();
    if (UNLIKELY(callFrame->argumentCount() < 1))
        return throwVMError(lexicalGlobalObject, throwScope, createNotEnoughArgumentsError(lexicalGlobalObject));
    EnsureStillAliveScope argument0 = callFrame->uncheckedArgument(0);
    auto type = convert<IDLDOMString>(*lexicalGlobalObject, argument0.value());
    RETURN_IF_EXCEPTION(throwScope, {});
    RELEASE_AND_RETURN(throwScope, JSValue::encode(toJS<IDLSequence<IDLInterface<PerformanceEntry>>>(*lexicalGlobalObject, *castedThis->globalObject(), throwScope, impl.getEntriesByType(WTFMove(type)))));
}

JSC_DEFINE_HOST_FUNCTION(jsPerformanceObserverEntryListPrototypeFunction_getEntriesByType, (JSGlobalObject * lexicalGlobalObject, CallFrame* callFrame))
{
    return IDLOperation<JSPerformanceObserverEntryList>::call<jsPerformanceObserverEntryListPrototypeFunction_getEntriesByTypeBody>(*lexicalGlobalObject, *callFrame, "getEntriesByType");
}

static inline JSC::EncodedJSValue jsPerformanceObserverEntryListPrototypeFunction_getEntriesByNameBody(JSC::JSGlobalObject* lexicalGlobalObject, JSC::CallFrame* callFrame, typename IDLOperation<JSPerformanceObserverEntryList>::ClassParameter castedThis)
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    UNUSED_PARAM(throwScope);
    UNUSED_PARAM(callFrame);
    auto& impl = castedThis->wrapped();
    if (UNLIKELY(callFrame->argumentCount() < 1))
        return throwVMError(lexicalGlobalObject, throwScope, createNotEnoughArgumentsError(lexicalGlobalObject));
    EnsureStillAliveScope argument0 = callFrame->uncheckedArgument(0);
    auto name = convert<IDLDOMString>(*lexicalGlobalObject, argument0.value());
    RETURN_IF_EXCEPTION(throwScope, {});
    EnsureStillAliveScope argument1 = callFrame->argument(1);
    auto type = argument1.value().isUndefined() ? String() : convert<IDLDOMString>(*lexicalGlobalObject, argument1.value());
    RETURN_IF_EXCEPTION(throwScope, {});
    RELEASE_AND_RETURN(throwScope, JSValue::encode(toJS<IDLSequence<IDLInterface<PerformanceEntry>>>(*lexicalGlobalObject, *castedThis->globalObject(), throwScope, impl.getEntriesByName(WTFMove(name), WTFMove(type)))));
}

JSC_DEFINE_HOST_FUNCTION(jsPerformanceObserverEntryListPrototypeFunction_getEntriesByName, (JSGlobalObject * lexicalGlobalObject, CallFrame* callFrame))
{
    return IDLOperation<JSPerformanceObserverEntryList>::call<jsPerformanceObserverEntryListPrototypeFunction_getEntriesByNameBody>(*lexicalGlobalObject, *callFrame, "getEntriesByName");
}

JSC::GCClient::IsoSubspace* JSPerformanceObserverEntryList::subspaceForImpl(JSC::VM& vm)
{
    return WebCore::subspaceForImpl<JSPerformanceObserverEntryList, UseCustomHeapCellType::No>(
        vm,
        [](auto& spaces) { return spaces.m_clientSubspaceForPerformanceObserverEntryList.get(); },
        [](auto& spaces, auto&& space) { spaces.m_clientSubspaceForPerformanceObserverEntryList = std::forward<decltype(space)>(space); },
        [](auto& spaces) { return spaces.m_subspaceForPerformanceObserverEntryList.get(); },
        [](auto& spaces, auto&& space) { spaces.m_subspaceForPerformanceObserverEntryList = std::forward<decltype(space)>(space); });
}

void JSPerformanceObserverEntryList::analyzeHeap(JSCell* cell, HeapAnalyzer& analyzer)
{
    auto* thisObject = jsCast<JSPerformanceObserverEntryList*>(cell);
    analyzer.setWrappedObjectForCell(cell, &thisObject->wrapped());
    if (thisObject->scriptExecutionContext())
        analyzer.setLabelForCell(cell, makeString("url "_s, thisObject->scriptExecutionContext()->url().string()));
    Base::analyzeHeap(cell, analyzer);
}

bool JSPerformanceObserverEntryListOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, AbstractSlotVisitor& visitor, ASCIILiteral* reason)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    UNUSED_PARAM(reason);
    return false;
}

void JSPerformanceObserverEntryListOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsPerformanceObserverEntryList = static_cast<JSPerformanceObserverEntryList*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsPerformanceObserverEntryList->wrapped(), jsPerformanceObserverEntryList);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable : 4483)
extern "C" {
extern void (*const __identifier("??_7PerformanceObserverEntryList@WebCore@@6B@")[])();
}
#else
extern "C" {
extern void* _ZTVN7WebCore28PerformanceObserverEntryListE[];
}
#endif
#endif

JSC::JSValue toJSNewlyCreated(JSC::JSGlobalObject*, JSDOMGlobalObject* globalObject, Ref<PerformanceObserverEntryList>&& impl)
{

    if constexpr (std::is_polymorphic_v<PerformanceObserverEntryList>) {
#if ENABLE(BINDING_INTEGRITY)
        // const void* actualVTablePointer = getVTablePointer(impl.ptr());
#if PLATFORM(WIN)
        void* expectedVTablePointer = __identifier("??_7PerformanceObserverEntryList@WebCore@@6B@");
#else
        // void* expectedVTablePointer = &_ZTVN7WebCore28PerformanceObserverEntryListE[2];
#endif

        // If you hit this assertion you either have a use after free bug, or
        // PerformanceObserverEntryList has subclasses. If PerformanceObserverEntryList has subclasses that get passed
        // to toJS() we currently require PerformanceObserverEntryList you to opt out of binding hardening
        // by adding the SkipVTableValidation attribute to the interface IDL definition
        // RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    }
    return createWrapper<PerformanceObserverEntryList>(globalObject, WTFMove(impl));
}

JSC::JSValue toJS(JSC::JSGlobalObject* lexicalGlobalObject, JSDOMGlobalObject* globalObject, PerformanceObserverEntryList& impl)
{
    return wrap(lexicalGlobalObject, globalObject, impl);
}

PerformanceObserverEntryList* JSPerformanceObserverEntryList::toWrapped(JSC::VM&, JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSPerformanceObserverEntryList*>(value))
        return &wrapper->wrapped();
    return nullptr;
}

}
