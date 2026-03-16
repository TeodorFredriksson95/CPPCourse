#include "../../../include/Exercises/Week1/Level5.h"

#include <conio.h>
#include <iostream>
#include <vector>

using namespace std;

namespace Week1::LevelFive {
    void GridGenerator(int moveX, int moveY);

    void GetInput() {
        //TODO: Add score to movement.
        char ch;
        do {
            ch = _getch();
            switch (ch) {
                case 'a': GridGenerator(-1, 0);
                    break;
                case 'd': GridGenerator(1, 0);
                    break;
                case 'w': GridGenerator(0, -1);
                    break;
                case 's': GridGenerator(0, 1);
                    break;
                case 'q': system("cls");
                    break;
            }
        } while (ch != 'q');
    }

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

        int constexpr WIDTH = 50;
        int constexpr HEIGHT = 10;

        static int playerPositionX = WIDTH / 2;
        static int playerPositionY = HEIGHT / 2;
        playerPositionX += moveX;
        playerPositionY += moveY;

        if (playerPositionX <= 0) playerPositionX = WIDTH - 2;
        if (playerPositionX >= WIDTH - 1) playerPositionX = 1;

        if (playerPositionY <= 0) playerPositionY = HEIGHT - 2;
        if (playerPositionY >= HEIGHT - 1) playerPositionY = 1;

        vector<char> cells(WIDTH * HEIGHT, '.');

        const int playerIndex = playerPositionY * WIDTH + playerPositionX; // Initialized to: 5 * 50 + 25 = 275.
        // The vector array `cells`is initialized with a size of 50*10 = 500.
        // Index 275 brings the player position to row 5, 25 columns in. If confused as to why the calc doesn't
        // equate to 250, which could be considered "half-way through", that's because index 250 would bring the player to
        // row 5, column 0, which would be half-way down, but at the start of the row.

        cells[playerIndex] = '@';

        for (int y = 0; y < HEIGHT; ++y) {
            for (int x = 0; x < WIDTH; ++x) {
                const int index = y * WIDTH + x;

                if (x == 0 || x == WIDTH - 1) cout << "#";
                else if (y == 0 || y == HEIGHT - 1) cout << "#";
                else cout << cells[index];
            }
            cout << endl;
        }
    }
}
