// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from primtypes.djinni

#pragma once

#include <cstdint>
#include <experimental/optional>
#include <utility>

struct AssortedPrimitives final {
    bool b;
    int8_t eight;
    int16_t sixteen;
    int32_t thirtytwo;
    int64_t sixtyfour;
    float fthirtytwo;
    double fsixtyfour;
    std::experimental::optional<bool> o_b;
    std::experimental::optional<int8_t> o_eight;
    std::experimental::optional<int16_t> o_sixteen;
    std::experimental::optional<int32_t> o_thirtytwo;
    std::experimental::optional<int64_t> o_sixtyfour;
    std::experimental::optional<float> o_fthirtytwo;
    std::experimental::optional<double> o_fsixtyfour;

    friend bool operator==(const AssortedPrimitives& lhs, const AssortedPrimitives& rhs);
    friend bool operator!=(const AssortedPrimitives& lhs, const AssortedPrimitives& rhs);

    AssortedPrimitives(bool b,
                       int8_t eight,
                       int16_t sixteen,
                       int32_t thirtytwo,
                       int64_t sixtyfour,
                       float fthirtytwo,
                       double fsixtyfour,
                       std::experimental::optional<bool> o_b,
                       std::experimental::optional<int8_t> o_eight,
                       std::experimental::optional<int16_t> o_sixteen,
                       std::experimental::optional<int32_t> o_thirtytwo,
                       std::experimental::optional<int64_t> o_sixtyfour,
                       std::experimental::optional<float> o_fthirtytwo,
                       std::experimental::optional<double> o_fsixtyfour)
    : b(std::move(b))
    , eight(std::move(eight))
    , sixteen(std::move(sixteen))
    , thirtytwo(std::move(thirtytwo))
    , sixtyfour(std::move(sixtyfour))
    , fthirtytwo(std::move(fthirtytwo))
    , fsixtyfour(std::move(fsixtyfour))
    , o_b(std::move(o_b))
    , o_eight(std::move(o_eight))
    , o_sixteen(std::move(o_sixteen))
    , o_thirtytwo(std::move(o_thirtytwo))
    , o_sixtyfour(std::move(o_sixtyfour))
    , o_fthirtytwo(std::move(o_fthirtytwo))
    , o_fsixtyfour(std::move(o_fsixtyfour))
    {}
};
