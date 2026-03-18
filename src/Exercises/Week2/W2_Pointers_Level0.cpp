#include "Exercises/Week2/W2_Pointers_Level0.h"
#include <iostream>

using namespace std;

namespace Week2::Pointers_Level0 {
    //  13. Pointer basics: int a = 7; int* p = &a; Print *p, change *p, print a.
    void PrintPointer() {
        int a{7};
        int *p{&a};
        cout << *p << endl; // Should print memory address. Something like ´0xF256´

        // Change *p
        *p = 10;

        cout << *p << endl;

        // 14. Null check: int* p = nullptr; check if (p != nullptr) before dereferencing
        // Should do this for the ones above, but separating null checks for the sake of displaying incremental practice
        if (p != nullptr) {
            cout << "Using null check before dereferencing pointer. Value of dereffed pointer: " << *p << endl;
        }

        // p = nullptr;
        // cout << "This is a nullptr: " << *p << endl;
    }
}
