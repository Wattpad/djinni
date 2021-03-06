// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from test.djinni

#include "test_helpers.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class DBTestHelpers;

namespace djinni_generated {

class TestHelpers
{
public:
    using CppType = std::shared_ptr<::TestHelpers>;
    using ObjcType = DBTestHelpers*;

    using Boxed = TestHelpers;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCpp(const CppType& cpp);

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

