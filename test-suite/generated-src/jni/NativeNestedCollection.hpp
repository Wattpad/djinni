// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from nested_collection.djinni

#pragma once

#include "djinni_support.hpp"
#include "nested_collection.hpp"

namespace djinni_generated {

class NativeNestedCollection final {
public:
    using CppType = ::NestedCollection;
    using JniType = jobject;

    using Boxed = NativeNestedCollection;

    ~NativeNestedCollection();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeNestedCollection();
    friend ::djinni::JniClass<NativeNestedCollection>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/dropbox/djinni/test/NestedCollection") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Ljava/util/ArrayList;)V") };
    const jfieldID field_mSetList { ::djinni::jniGetFieldID(clazz.get(), "mSetList", "Ljava/util/ArrayList;") };
};

}  // namespace djinni_generated
