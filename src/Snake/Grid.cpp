#include "Snake/Grid.h"

#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;
using namespace Snake;

void GridGenerator(int const moveX, int const moveY) {
       //TODO: Add randomly placed obstacles.

        // USE THIS WITH CAUTION - `system("cls")`makes a system call. If someone were to place a "cls.bat" file on your disk
        // then that program might be run by the below system call. That file in itself could be any kind of virus.
        // Highly unlikely, but on a more public computer, this function call should be used with great intent and understanding
        // of potential implications.

        // In this case, this program is a prep for a homework assignment. Whoever run this program does so at their own risk.
        system("cls");

        // Create space from top
        cout << endl;
        cout << endl;
        cout << endl;


        static int playerPositionX = Grid::WIDTH / 2;
        static int playerPositionY = Grid::HEIGHT / 2;
        playerPositionX += moveX;
        playerPositionY += moveY;

        if (playerPositionX <= 0) playerPositionX = Grid::WIDTH - 2;
        if (playerPositionX >= Grid::WIDTH - 1) playerPositionX = 1;

        if (playerPositionY <= 0) playerPositionY = Grid::HEIGHT - 2;
        if (playerPositionY >= Grid::HEIGHT - 1) playerPositionY = 1;

        vector<char> cells(Grid::WIDTH * Grid::HEIGHT, '.');

        const int playerIndex = playerPositionY * Grid::WIDTH + playerPositionX; // Initialized to: 5 * 50 + 25 = 275.
        // The vector array `cells`is initialized with a size of 50*10 = 500.
        // Index 275 brings the player position to row 5, 25 columns in. If confused as to why the calc doesn't
        // equate to 250, which could be considered "half-way through", that's because index 250 would bring the player to
        // row 5, column 0, which would be half-way down, but at the start of the row.

        cells[playerIndex] = '@';

        for (int y = 0; y < Grid::HEIGHT; ++y) {
            for (int x = 0; x < Grid::WIDTH; ++x) {
                const int index = y * Grid::WIDTH + x;

                if (x == 0 || x == Grid::WIDTH - 1) cout << "#";
                else if (y == 0 || y == Grid::HEIGHT - 1) cout << "#";
                else cout << cells[index];
            }
            cout << endl;
        }
    }
