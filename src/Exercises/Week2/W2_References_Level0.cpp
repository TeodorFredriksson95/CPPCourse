#include "Exercises/Week2/W2_References_Level0.h"
#include <iostream>

using namespace std;

namespace Week2::References_Level0 {

    struct Vec2 { // It's actually getting really annoying (and breaking of best practices)
        // to keep re-defining Vec2 for the sake of keeping modular practice levels.
        // Should really look into forward declaring classes in header files and refactor usage of Vec2.
        // Right now, to keep main.cpp clean, I have to think of ways to abstract usage of desired functions
        // by using wrapper functions. Tedious.
        int x;
        int y;
    };
    void IncrementX(Vec2& p);


    // 9. Reference alias: int a = 5; int& r = a; Change r. Print a.
    void ChangeAndPrintReference() {
        int a {5}; // Normal integer variable.
        int& r {a}; // Reference to variable ´a´.

        r = 10; // Changing the value of the reference ´r´,
                // will also change the value of the referent, ´a´

        cout << a << endl; // Should print the value "10".
    }

    // 10. Swap: write void Swap(int& a, int& b) and test it.
    void Swap(int& a, int& b) {
        const int& temp = a;

        cout << "Initial value of variable a: " << a << endl;
        cout << "Initial value of variable b: " << b << endl;

        a = b; // This also changes the ´temp´ variable, as it is an alias for variable ´a´.
        b = temp;

        cout << "Updated value of a: " << a << endl;
        cout << "Updated value of b: " << b << endl;
    }

    // 11. Modify Vec2 by reference: void MoveRight(Vec2& p) increments x.

    void MoveRight() { // Omitting the desired argument for function ´MoveRight´ and using it as a wrapper
                              // instead, so I can call it from main without issue until I figure out how to
                              // forward declare structs/classes in header files.

        Vec2 pos {1,2};
        cout << "Position x BEFORE value changed by reference: " << pos.x << endl;
        IncrementX(pos);
        cout << "Position x AFTER value changed by reference: " << pos.x << endl;
    }

    void IncrementX(Vec2& p) {
        p.x++;
    }

}