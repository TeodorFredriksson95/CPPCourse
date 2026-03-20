#ifndef CPPCOURSE_GRID_H
#define CPPCOURSE_GRID_H
#include <string>
#include <vector>

namespace Snake {
    struct Vec2;

    class Grid {
    public:
        Grid(int width, int height, char emptyChar = '.');

        bool InBounds(Vec2 pos) const;

        int ToIndex(Vec2 pos) const;

        void Clear();

        void SetCell(Vec2 pos, char character);

        char GetCell(Vec2 pos) const;

        std::string Render() const;

        int GetWidth() const { return m_width; }
        int GetHeight() const { return m_height; }

        int GetPlayerPosX() const { return m_playerPositionX / 2; }
        int GetPlayerPosY() const { return m_playerPositionY / 2; }

    private:
        int m_width;
        int m_height;

        char m_empty = '.';
        std::vector<char> m_cells;

        const int m_playerPositionX;
        const int m_playerPositionY;
    };
}

#endif //CPPCOURSE_GRID_H
