#ifndef CPPCOURSE_GRID_H
#define CPPCOURSE_GRID_H

namespace Snake {
    class Grid {
    public:
        Grid(int width, int height);
        static int constexpr WIDTH = 50;
        static int constexpr HEIGHT = 10;

        int playerPositionX = WIDTH / 2;
        int playerPositionY = HEIGHT / 2;

        void GenerateGrid(int const moveX, int const moveY);



    };
}

#endif //CPPCOURSE_GRID_H
