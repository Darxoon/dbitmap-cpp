//
// Created by Jakob on 23/02/2020.
//

#include <vector>
#include "Color.h"

#ifndef IMGTEST_BITMAP_H
#define IMGTEST_BITMAP_H

namespace Img {

    /**
     * A bitmap of colors
     */
    class Bitmap {

    public:
        /**
         * A bitmap of colors
         * @param w the width
         * @param h the height
         * @param defaultColor the default color all pixels should be initialized with
         */
        Bitmap(int w, int h, Color defaultColor);
        ~Bitmap();

    public:
        /**
         * Gets the color at a specific position
         * @param x The x coordinate, going left to right
         * @param y The y coordinate, going up to down
         * @return The color of that pixel
         */
        Color get(int x, int y);
        /**
         * Sets the color at a specific position
         * @param x The x coordinate, going left to right
         * @param y The y coordinate, going up to down
         * @param value The new value of the pixel
         */
        void set(int x, int y, Color value);

        /**
         * The width of the bitmap
         * @return width
         */
        int getWidth();
        /**
         * The height of the bitmap
         * @return height
         */
        int getHeight();
        /**
         * The amount of pixels or the length of the dynamic array containing the pixels
         * @return length
         */
        int getLength();


    protected:
        Color *data;
        int width, height, length;

    };

}

#endif //IMGTEST_BITMAP_H
