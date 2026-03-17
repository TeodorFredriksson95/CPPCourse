#include "Exercises/Week2/W2_Pointers_Level1.h"
#include <iostream>
#include <string>
#include <climits>

using namespace std;

namespace Week2::Pointers_Level1 {

    // 15. Optional output: write bool TryParseInt(const std::string& s, int* outValue). Return true/false; write
    // result into *outValue on success.
    bool TryParseInt(const std::string &s, int *outValue) {
        if (s.empty() || outValue == nullptr) {
            return false;
        }

        int sign = 1;
        size_t i = 0;

        if (s[0] == '-') {
            sign = -1;
            i = 1;
        }


        if (sign == -1 && s.size() == 1) {
            return false; // Only ´-´ sign was supplied
        }

        int result = 0;
        for (; i < s.size(); ++i) {
            if (s[i] < '0' || s[i] > '9') { // Comparing ASCII values. For example, the character '/'
                                            // has the ASCII value 47, while the character '0' has the ASCII value 48.
                                            // For example the value `12/43` is not a valid int value, as noted by the '/' character.
                                            // This is what we check for in code, by comparing ASCII values.
                                            // ASCII table reference: https://www.ascii-code.com/characters/printable-characters
                return false;
            }

            int digit = s[i] - '0'; // ASCII math. For example, let's say that the current s[i] character is '1'.
                                    // The actual value that would be assigned to the int `digit` would be: `49-48` which equals: 1.

            // Check overflow
            if (result > (INT_MAX - digit) / 10) {
                return false;
            }

            result = result * 10 + digit;
        }

        *outValue = result;
        return true;
    }
}
