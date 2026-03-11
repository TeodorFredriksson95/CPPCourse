#include "Exercises/Week2/W2_Level1.h"
#include <iostream>

using namespace std;

namespace Week2::Level1 {
    void RunTemplateFunction() {
        cout << MaxNumber<int>(1, 2) << endl;
    }

    // 4. Class Counter: private int value. Methods: Increment(), Reset(), Get() const.
    class Counter {
    private:
        int value = 0;

    public:
        void Increment() {
            value++;
        }
        void Reset() {
            value = 0;
        }
        constexpr int GetNumber() const {
            return value;
        }
    };


    // 5. Class Player: private Vec2 pos. Constructor sets start pos. Methods MoveUp/Down/Left/Right and Pos()
    // const.
}
