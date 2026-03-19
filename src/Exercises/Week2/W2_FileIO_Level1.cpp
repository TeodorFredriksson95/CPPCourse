#include "Exercises/Week2/W2_FileIO_Level1.h"
#include <fstream>
#include <iostream>
#include <vector>

#include "Exercises/Week2/W2_FileIO_Level0.h"

using namespace std;
using namespace Week2::FileIO_Level0;

namespace Week2::FileIO_Level1 {
    // 19. Read all scores: read ints from file into std::vector<int>.
    StatusCode ReadAllScores() {
        int score;
        ifstream infile("Score.txt");
        if (!infile) {
            cerr << "Error reading scores.txt\n";
            return FAILURE;
        }

        cout << "Scores in file:\n";
        while (infile >> score) {
            cout << score << '\n';
        }
        infile.close();
        return SUCCESS;
    }

    // 20. Top 5 leaderboard: sort descending and print top 5.
    StatusCode SortAndPrintTopScores() {
        vector<int> scores;
        int score{0};
        ifstream infile("Scores.txt");

        // 21. Handle missing file: if file can’t open, start with empty scores and continue
        if (!infile) {
            cout << "Couldnt read score file. Creating new score file.\n";

            ofstream outfile("Scores.txt", ios::app);
            if (!outfile) {
                cerr << "Could not open file for writing.\n";
                return FAILURE;
            }

            for (int i = 0; i < 5; ++i) {
                outfile << 0 << '\n';
                scores.push_back(0);
            }
        }
        while (infile >> score) {
            scores.push_back(score);
        }
        infile.close();

        for (int i = 0; i < scores.size() - 1; ++i) {
            for (int j = i + 1; j < scores.size(); ++j) {
                if (scores[j] > scores[i]) {
                    const int temp = scores[j];
                    scores[j] = scores[i];
                    scores[i] = temp;
                }
            }
        }

        cout << "High Scores:\n";
        for (int i = 0; i < scores.size() && i < 5; ++i) {
            cout << scores[i] << '\n';
        }

        return SUCCESS;
    }
}
