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
