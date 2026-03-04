
#include "../../../include/Exercises/Week1/Level0.h"
#include <algorithm>
#include <codecvt>
#include <iostream>
#include <ctime>

using namespace std;

namespace Week1 {
#pragma region LEVEL 0

    // 1. Print three lines: your name, today’s date, and your favorite game.
    void PrintStuff() {
        time_t timeStamp = time(nullptr);
        struct tm const dateTime = *localtime(&timeStamp);

        char output[50];

        std::strftime(output, 50, "%B %d, %Y", &dateTime);

        time_t timestamp = time(NULL);
        struct tm datetime = *localtime(&timestamp);

        std::cout << asctime(&datetime);

        cout << output;
        std::cout << "My name is: Teodor Fredriksson\n";
        std::cout << "Today's date is: " << output << '\n';
    }

    // 2. Variables: create int, double, char, bool, std::string. Print them. Change values and print again.
    void ChangeAndPrintVariables() {
        struct myStruct {
            int myInt = {5};
            double myDouble = 10.0;
            bool myBool = true;
            char myChar = 'a';
            std::string myString = "Hello from a string";
        };

        myStruct myStruct1;

        cout << myStruct1.myInt << endl;
        cout << myStruct1.myDouble << endl;

        cout << boolalpha;
        cout << myStruct1.myBool << endl;
        cout << noboolalpha;

        cout << myStruct1.myChar << endl;
        cout << myStruct1.myString << endl;

        myStruct1.myInt = 10;
        myStruct1.myDouble = 20.0;
        myStruct1.myBool = !myStruct1.myDouble;
        myStruct1.myChar = 'b';
        myStruct1.myString = "A completely different string";

        cout << myStruct1.myInt << endl;
        cout << myStruct1.myDouble << endl;

        cout << boolalpha;
        cout << myStruct1.myBool << endl;
        cout << noboolalpha;

        cout << myStruct1.myChar << endl;
        cout << myStruct1.myString << endl;
    }

    // 3. Basic math: read two integers. Print sum, difference, product, and safe division. If divisor is 0, print an
    // error.
    void PrintDifferentNumbers() {
        int a;
        int b;

        cout << "Enter first whole number: ";
        cin >> a;
        cout << endl;

        cout << "Enter second whole number: ";
        cin >> b;
        cout << endl;

        cout << "Sum of the two numbers yield: " << a + b << endl;
        cout << "Product of the two numbers yield: " << a * b << endl;

        cout << "Safe division yields: ";
        if (b == 0) {
            cout << "Division by zero! No bueno, no serri" << endl;
        } else {
            cout << a / b << endl;
        }
    }

    // 4. Even or odd: read an integer. Print “even” or “odd”.
    void PrintEvenOrOdd() {
        cout << "Enter a number";

        int a;
        cin >> a;
        cout << endl;

        if (a % 2 == 0) {
            cout << "Number is even stevens!" << endl;
        } else {
            cout << "Number is odd!" << endl;
        }
    }

    // 5. Clamp: read an int x. If x < 0 set it to 0. If x > 10 set it to 10. Print result.
    void ClampNumbers() {
        int constexpr high = 10;
        int constexpr low = 0;

        int input;

        cout << "Enter a number: ";
        while (!(cin >> input)) {
            cout << "Not a valid number. Try again";
            cin.clear();
            cin.ignore(10000, '\n');
        }
        input = clamp(input, low, high);
        cout << "The value has been clamped to: " << input << endl;
    }
#pragma endregion


    // Encapsulate micro exercises
    void Level0() {
        PrintStuff();
        ChangeAndPrintVariables();
        PrintDifferentNumbers();
        PrintEvenOrOdd();
        ClampNumbers();
    }
}
