#include "Exercises/Week2/W2_Pointers_Level2.h"
#include <iostream>

using namespace std;

namespace Week2::Pointers_Level2 {
    // 16. Dynamic memory: allocate an int with new int(42), print it, then delete it.
    void DynamicIntMemory() {
        int* someInt = new int(42);
        cout << "An int pointer with the value: " << *someInt << endl;

        delete someInt; // If no delete, memory leak for you!!
    }
}
