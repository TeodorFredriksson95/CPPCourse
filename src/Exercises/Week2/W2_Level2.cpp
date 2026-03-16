#include "Exercises/Week2/W2_Level2.h"

namespace Week2::Level2 {

    struct Vec2 {
        int x;
        int y;
    };

    class Grid {
        int m_width;
        int m_height;

        int playerPositionX = m_width / 2;
        int playerPositionY = m_height / 2;

        Grid(int const width, int const height)
            : m_width(width), m_height(height) {
            if (width <= 0) {
                m_width = 10;
            }
            if (height <= 0) {
                m_height = 10;
            }
        }

        bool InBounds(const Vec2 pos) const {
            if (pos.x < m_width - 1
                && pos.x > 0
                && pos.y < m_height -1
                && pos.y > 0) {
                return true;
            }
            return false;
        }

    };
}
