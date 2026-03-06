#include "../include/Exercises/Week1/Level2.h"
#include <iostream>
#include <limits>

using namespace std;

namespace Week1::LevelTwo {
    // 10. Count up/down: print 1..20, then 20..1.
    void CountUpAndDown() {
        cout << "Count up.\n";
        for (int i = 1; i <= 20; ++i) {
            cout << i << endl;
        }

        cout << "Count down.\n";
        for (int i = 20; i > 0; --i) {
            cout << i << endl;
        }
    }

    // 11. Multiplication table: print 1×1 to 5×5.
    void MultiplicationTable() {
        int constexpr numbersTable[5]{1, 2, 3, 4, 5};

        for (int y = 0; y < size(numbersTable); ++y) {
            for (int x = 0; x < size(numbersTable); ++x) {
                cout << y + 1 << " multiplied by " << x + 1 << " is: " << numbersTable[y] * numbersTable[x] << endl;
            }
        }
    }

    // 12. Draw a line: read width w. Print w times #.
    void DrawTopBorder() {
        int input;

        cout << "How wide should the top border be? Please enter a number\n";
        while (!(cin >> input)) {
            cout << "Invalid input. Please enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cout << "You entered: " << input << endl;

        for (int i = 0; i < input; ++i) {
            cout << "#";
        }
    }


    // 13. Rectangle: read width and height. Print a rectangle of #.
    void DrawFilledRectangle() {
        int width;
        int height;

        cout << "How wide should the rectangle be? Please enter a number\n";
        while (!(cin >> width)) {
            cout << "Invalid input. Please enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cout << "How high should the rectangle be? Please enter a number\n";
        while (!(cin >> height)) {
            cout << "Invalid input. Please enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        for (int y = 0; y < height; ++y) {
            for (int x = 0; x < width; ++x) {
                cout << "#";
            }
            cout << endl;
        }
    }



    // 14. Border-only rectangle: border is # and inside is .
    void DrawEmptyRectangle() {
        int width;
        int height;

        cout << "How wide should the rectangle be? Please enter a number\n";
        while (!(cin >> width)) {
            cout << "Invalid input. Please enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cout << "How high should the rectangle be? Please enter a number\n";
        while (!(cin >> height)) {
            cout << "Invalid input. Please enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        // Top border
        for (int x = 0; x < width; ++x) {
            cout << "#";
        }
        cout << endl;

        // Side borders
        for (int y = 0; y < height; ++y) {
            for (int x = 0; x < width; ++x) {
                if (x == 0 || x == width - 1) {
                    cout << "#";
                } else {
                    cout << " ";
                }
            }
            cout << endl;
        }

        // Bottom border
        for (int x = 0; x < width; ++x) {
            cout << "#";
        }
        cout << endl;
    }
}
