#ifndef CPPCOURSE_GRID_H
#define CPPCOURSE_GRID_H

namespace Snake {
    struct Vec2;

    class Grid {
    public:

        Grid(const int width, const int height);

        bool InBounds(Vec2 pos) const;

        void GenerateGrid(int const moveX, int const moveY);

        int GetWidth() const {return m_width;}
        int GetHeight() const {return m_height;}

        int GetPlayerPosX() const {return m_playerPositionX / 2;}
        int GetPlayerPosY() const {return m_playerPositionY / 2;}

    private:
        const int m_width;
        const int m_height;

        const int m_playerPositionX;
        const int m_playerPositionY;
    };
}

#endif //CPPCOURSE_GRID_H
