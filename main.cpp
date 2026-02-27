#include "include/menu/menu.h"
#include <iostream>
#include <list>
#include <conio.h>
#include <windows.h>
#include <algorithm>
#include <ctime>

using namespace std;

class Snake {
public:
    enum Direction {
        EAST = 1, NORTH = 2, WEST = 3, SOUTH = 4
    };

    int maxWidth;
    int maxHeight;
    int isAlive;

    Direction direction;

    list<int> cells;

    Snake() {
        isAlive = 1;
    }

    Snake(const int width, const int height) {
        maxWidth = width;
        maxHeight = height;
    }

    bool HasCell(const int cell) {
        return cells.end() != std::find(cells.begin(), cells.end(), cell);
    }

    void SetDirection(Direction dir) {
        // can't move in the opposite direction of current active direction
        if (abs(direction - dir) != 2) {
            direction = dir;
        }
    }

    int Head() const {
        return cells.back();
    }

    int NextHead() {
        int x = Head() % maxWidth; // returns the column number
        int y = Head() / maxWidth; // returns the row number

        switch (direction) {
            case EAST:
                x = maxWidth - 1 <= x ? 0 : x + 1; // if we reached the last column, set location back to first column
                break;
            case WEST:
                x = x <= 0 ? maxWidth - 1 : x - 1; // if we reached the first column, set location to last column.
                break;
            case NORTH:
                y = y <= 0 ? maxHeight - 1 : y - 1; // if we reached the first row, set location to last row
                break;
            case SOUTH:
                y = y <= maxHeight - 1 ? y = 0 : y + 1; // if we reached the last row, set location to first row.
            default:
                break;
        }
        // REMEMBER: USING 1D-GRID WITH WRAP AROUNDS. The "max height" of a grid system, ie the last row,
        // is going to be displayed as the "last printed log". Remember this when you get confused about cardinal directions.

        return y * maxWidth + x; // follows the formula row * columns + c to return the index of a 2D grid in 1D memory.
        // Example: Let's say height is = 4, width = 10 (representing 10 columns, 4 rows)
        // We would have a grid that looks something like this;

        // 0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9,
        // 1.0, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9,
        // 2.0, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9,
        // 3.0, 3.1, 3.2, 3.3, 3.4, 3.5, 3.6, 3.7, 3.8, 3.9,

        // The dots are just to keep proper spacing between each intended index. Imagine 0.4 = 4 ( row 1, column 5), and 2.2 = 22 (row 3, column 3).

        // Now let's say we're at row 3, column 5 (as represented by the index 2.4, and could be equivalent to the value 24).
        // Now let's compute our x and y values, representing our width and height.
        // That means Head() returns 24.
        // x = 24 % 10 = 4
        // y = 24 / 10 = 2
        // Given our formula, we get: 2 * 10 + 4 = 24.
        // Now, let's take into account the fact that we incremented either the x or y value in the direction of which we
        // are currently traveling towards. Let's say we're traveling in the east direction, which means we have just
        // incremented our current x value by 1, which represents our prognosed next position.

        // That means our *actual* calculation is going to look like this;
        // 2 * 10 + 5 = 25.
        // Using our "grid" above, 2.5 would correlate to the same row as previously, but 1 column ahead, ie column 6.

    }
};


int grid[100];

void InitSnakePosition() {
}

int main() {
    constexpr int WIDTH = 100;
    constexpr int HEIGHT = 20;

    for (int i = 0; i < 100; ++i) {
        grid[i] = i;
    }
    int snake[5] = {};
    // DisplayMainMenu();

    std::cout << std::endl;

    //Print top walls grid
    for (int i = 0; i < WIDTH; ++i) {
        std::cout << "=";
    }

    std::cout << std::endl;

    // Print side walls
    for (int y = 0; y < HEIGHT; ++y) {
        for (int x = 0; x < WIDTH - 2; x++) {
            if (x == 0) {
                std::cout << "||";
            } else if (x == WIDTH - 3) {
                std::cout << "||" << std::endl;
            } else {
                std::cout << " ";
            }
        }
    }

    //Print bottom walls grid
    for (int i = 0; i < WIDTH; ++i) {
        std::cout << "=";
    }

    return 0;
}
