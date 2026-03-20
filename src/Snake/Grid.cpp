#include "Snake/Grid.h"

#include <cstdlib>
#include <iostream>
#include <vector>

#include "Snake/Vec2.h"

using namespace std;

namespace Snake {
    Grid::Grid(const int width, const int height, char emptyChar) : m_width(width),
                                                                      m_height(height),
                                                                      m_empty(emptyChar),
                                                                      m_playerPositionX(width / 2),
                                                                      m_playerPositionY(height / 2) {
        if (width <= 0) m_width = 50;
        if (height <= 0) m_height = 10;

        m_cells.assign(static_cast<size_t>(m_width * m_height), m_empty);
    }
}


bool Snake::Grid::InBounds(const Vec2 pos) const {
    if (pos.x <= 0
        || pos.x >= m_width - 1
        || pos.y <= 0
        || pos.y >= m_height) {
        return false;
    }
    return true;
}

int Snake::Grid::ToIndex(const Vec2 pos) const {
    return pos.y * m_width + pos.x;
}

void Snake::Grid::Clear() {
    fill(m_cells.begin(), m_cells.end(), m_empty);
}

void Snake::Grid::SetCell(Vec2 pos, char character) {
    if (!InBounds(pos)) return;
    const size_t index = static_cast<size_t>(ToIndex(pos)); // Prefer to cast to size_t as opposed to preserving
                                                            // the returned int value, since vector[] expects a size_t init value.
                                                            // Also, size_t is unsigned, which makes more sense as opposed to potentially
                                                            // initializing the vector with a negative value, which does NOT make sense.
    m_cells[index] = character;
}

char Snake::Grid::GetCell(Vec2 pos) const {
    if (!InBounds(pos)) return m_empty;
    const size_t index = static_cast<size_t>(ToIndex(pos));
    return m_cells[index];
}

string Snake::Grid::Render() const {
    string s;

    // Reserve capacity for the string
    s.reserve(static_cast<size_t>(m_width * 2 +1) * m_height + 64); // This formula has been provided to me by CJ.
    // Need to investigate the use case of the magic numbers
    // They might not fit my end intention.
    s += '\n';
    for (int y = 0; y < m_height; ++y) {
        for (int x = 0; x < m_width; ++x) {
            const char c = m_cells[static_cast<size_t>(y * m_width + x)]; // return the current character value at the given index.
            s += c; // append the returned character to the string
            s += ' '; // append empty char to string
        }
        s += '\n';
    }
    return s;
}
