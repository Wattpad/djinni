#pragma once

#include <boost/optional.hpp>
#include <functional>

using boost::optional;

// A common functional way of representing error conditions. The left value is
// typically an error and the right value is a correct ("right") value.
template<typename LeftType, typename RightType>
struct either {
public:
    either(LeftType left) : mLeft(std::move(left)) {}
    either(RightType right) : mRight(std::move(right)) {}

    bool isLeft() const throw() { return static_cast<bool>(mLeft); }
    bool isRight() const throw() { return static_cast<bool>(mRight); }

    LeftType left() const { return *mLeft; }
    RightType right() const { return *mRight; }

    void withLeft(std::function<void(LeftType)> f) const {
        if (isLeft()) { f(left());  }
    }
    void withRight(std::function<void(RightType)> f) const {
        if (isRight()) { f(right()); }
    }

private:
    const optional<LeftType> mLeft;
    const optional<RightType> mRight;
};
