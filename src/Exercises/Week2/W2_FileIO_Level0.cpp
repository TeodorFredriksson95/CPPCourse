#include "Exercises/Week2/W2_FileIO_Level0.h"
#include <fstream>
#include <iostream>

using namespace std;

namespace Week2::FileIO_Level0 {


    // 17. Write a single score: save an int score to score.txt.
    StatusCode WriteSingleScoreIO(int const score) { // I don't mind copy initialization here due to int byte size.

        // File is created at: C:\Users\{USERNAME}\CLionProjects\CPPCourse\cmake-build-debug
        ofstream outf{"Score.txt"};

        if (!outf) {
            cerr << "Could not open file for writing." << endl;
            return FAILURE;
        }

        outf << score << endl;

        return SUCCESS;
    }

    // 18. Append multiple scores: append a score each run (use std::ios::app).
     StatusCode AppendScoreToFile(int const score) {
        ofstream outf{"Score.txt", ios::app};

        if (!outf) {
            cerr << "Could not open file for writing." << endl; // Just learned that ´endl´ flushes the stream, which is more performance heavy than ´'\n'´. That's good to know.
            return FAILURE;
        }
        outf << score << '\n';
        return SUCCESS;

    }
}