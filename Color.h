//
// Created by Jakob on 23/02/2020.
//

#include <cstdint>

#ifndef IMGTEST_COLOR_H
#define IMGTEST_COLOR_H

namespace Img {

    /**
     * A color with RGBA values
     */
    struct Color {
        uint_fast8_t r, g, b, a;

    };

    /**
     * Contains preset colors
     */
    namespace Colors {
        Color BLACK = {0, 0, 0, 255};
        Color WHITE = { 255, 255, 255, 255};

        Color RED   = { 255, 0, 0, 255};
        Color GREEN = { 0, 255, 0, 255};
        Color BLUE  = { 0, 0, 255, 255};

        Color TRANSPARENT = { 0, 0, 0, 0 };
    }
}

#endif //IMGTEST_COLOR_H
