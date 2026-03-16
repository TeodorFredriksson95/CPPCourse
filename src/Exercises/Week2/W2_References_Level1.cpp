#include "Exercises/Week2/W2_References_Level1.h"
#include <iostream>
#include <vector>

using namespace std;

namespace Week2::References_Level1 {

    void PrintVec(const vector<int>& vec) {
        cout << "Address has been copied of a large vector that contains: " << vec.size() << " elements. Would be very expensive to copy all of these elements just to print them, wouldnt it?" << endl;
    }
}