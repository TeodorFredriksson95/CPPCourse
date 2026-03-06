#include "../../../include/Exercises/Week1/Level4.h"
#include <iostream>
#include <conio.h>

using namespace std;

namespace Week1::LevelFour {
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

    // 17. 10×10 grid render: print a 10×10 grid of dots. Put player @ at (x,y).
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

                // 18. Clamp movement: player stays in bounds 0..9.
                // 19. Wrap movement (optional): moving off one edge wraps to the opposite edge
                if (playerPositionX <= 0) playerPositionX = WIDTH - 2;
                if (playerPositionX >= WIDTH - 1) playerPositionX = 1;
                if (playerPositionY < 0) playerPositionY = HEIGHT - 1;
                if (playerPositionY >= HEIGHT) playerPositionY = 0;


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
}
