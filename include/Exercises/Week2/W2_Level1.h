
#ifndef CPPCOURSE_W2_LEVEL1_H
#define CPPCOURSE_W2_LEVEL1_H

namespace Week2::Level1 {

    // Function template for funsies
    template <typename T>
    T MaxNumber(T x, T y) {
        return x > y ? x : y;
    }

    // Struct class template
    template <typename T>
    struct Pair {
        T first{};
        T second{};
    };

    void RunTemplateFunction();
}

#endif //CPPCOURSE_W2_LEVEL1_H