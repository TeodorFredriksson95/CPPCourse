#include "../../../include/Exercises/Week1/Level3.h"

#include <conio.h>
#include <iostream>

using namespace std;


namespace Week1::LevelThree {
    void RenderGrid(int moveX, int moveY);

    void GetInput() {
        char ch;
        do {
            ch = _getch();
            switch (ch) {
                case 'a': RenderGrid(-1, 0);
                    break;
                case 'd': RenderGrid(1, 0);
                    break;
                case 'w': RenderGrid(0, -1);
                    break;
                case 's': RenderGrid(0, 1);
                    break;
                case 'q': system("cls");
                    break;
            }
        } while (ch != 'q');
    }

    // 15. Text player movement: x starts at 0. Input a/d moves left/right. Print x each turn. Quit on q.
    void RenderGrid(int moveX = 0, int moveY = 0) {
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

        // Draw map
        int constexpr WIDTH = 50;
        int constexpr HEIGHT = 10;

        static int playerPositionX = WIDTH / 2;
        static int playerPositionY = HEIGHT / 2;
        playerPositionX += moveX;
        playerPositionY += moveY;

        // Top border
        for (int x = 0; x < WIDTH; ++x) {
            cout << "#";
        }
        cout << endl;

        // Side borders
        for (int y = 0; y < HEIGHT; ++y) {
            for (int x = 0; x < WIDTH; ++x) {
                if (y == playerPositionY && x == playerPositionX) {
                    cout << "@";
                    continue;
                }

                if (x == 0 || x == WIDTH - 1) {
                    cout << "#";
                } else {
                    cout << " ";
                }
            }
            cout << endl;
        }

        // Bottom border
        for (int x = 0; x < WIDTH; ++x) {
            cout << "#";
        }
        cout << endl;
    }


    // 16. 2D position: add y. Support w/a/s/d. Print (x,y).
    // See above function that implements it. Added it onto task #15.
}
