#include "Exercises/Week2/W2Level0.h"
#include <iostream>

using namespace std;

namespace Week2::Level0 {

    struct Vec2;
    void PrintPassedStruct(const Vec2& vec);

    // 1. Struct Vec2: struct Vec2 { int x; int y; }; Create a Vec2, assign values, print them.
    struct Vec2 {
        int x {10};
        int y {20};
    };

    std::ostream& operator<<(std::ostream& out, const Vec2& vec) {
        out << "(" << vec.x << ", " << vec.y << ")";
        return out;
    }
    void DefineStruct() {

        Vec2 vec {22, 31};
        cout << "vec: " << vec << std::endl;
    }

    // 2. Pass Vec2 to a function: write void Print(Vec2 p).
    void PassedStructPrint() {
        Vec2 constexpr vec {12, 61};
        PrintPassedStruct(vec);
    }

    void PrintPassedStruct(const Vec2& vec) {
        cout << "Passed vector 2D: " << vec << endl;
    }

    // 3. Compare positions: write bool SamePos(Vec2 a, Vec2 b).
    bool SamePos(Vec2 const vec1, Vec2 const vec2) {
        if (vec1.x == vec2.x && vec1.y == vec2.y) return true;
        else return false;
    }
    void CompareVectors() {
        Vec2 constexpr vec1 {1,5};
        Vec2 constexpr vec2 {29,16};
        cout << boolalpha;
        cout << SamePos(vec1, vec2) << endl;
        cout << noboolalpha;
    }


}