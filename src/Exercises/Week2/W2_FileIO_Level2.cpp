#include "Exercises/Week2/W2_FileIO_Level2.h"
#include "Exercises/Week2/W2_FileIO_Level0.h"

#include <fstream>
#include <iostream>
#include <vector>

using namespace std;
using namespace Week2::FileIO_Level0;

namespace Week2::FileIO_Level2 {
    // 22. CSV-ish format: save lines as 'name score' and load them into struct ScoreEntry { std::string name; int
    // score; }.
    StatusCode CSVSaveFile(const string &name, const int score) {
        ofstream outf{"Scores.txt", ios::app};
        ScoreEntry entry;

        if (!outf) {
            cerr << "Couldnt open file 'Scores'.\n";
            return FAILURE;
        }

        outf << name << " " << score;
        entry.name = name;
        entry.score = score;

        cout << "Score '" << name << " " << score << "' was successfully created\n";

        return SUCCESS;
    }

    // 23. JSON-ish format: write { "scores": [10, 7, 42] }. For reading, you may simplify by extracting integers from
    // the text.
    StatusCode JSONSaveFile(const int newScore) {
        vector<int> scores;
        ifstream inFile{"Scores.txt"};
        ScoreEntry entry;
        if (inFile) {
            string content((istreambuf_iterator<char>(inFile)), istreambuf_iterator<char>());
            int num{0};
            bool inNumber{false};

            for (char c: content) {
                if (isdigit(c)) {
                    num = num * 10 + (c - '0');
                    inNumber = true;
                } else {
                    if (inNumber) {
                        scores.push_back(num);
                        // We hit a character after a number -> push the last tracked number to the vector.
                        inNumber = false;
                        num = 0;
                    }
                }
            }
            if (inNumber) {
                scores.push_back(num); // In case last character of file was actually a number (not proper file closure), push last tracked number to vector.
            }
        }

        scores.push_back(newScore);

        ofstream outFile("Scores.json");
        if (!outFile) {
            cerr << "Couldnt open file 'Scores.json'.\n";
            return FAILURE;
        }

        outFile << "{ \"scores\": [";
        for (int i = 0; i < scores.size(); i++) {
            outFile << scores[i];
            if (i < scores.size() - 1) {
                outFile << ", ";
            }
        }
        outFile << "] }";
        outFile.close();

        return SUCCESS;
    }
}
