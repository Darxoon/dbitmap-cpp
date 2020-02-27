//
// Created by Jakob on 25/02/2020.
//

#include "Bitmap.h"
#include <iostream>

#ifndef IMGTEST_BITMAPENCODING_H
#define IMGTEST_BITMAPENCODING_H

/**
 * Encodes or decodes bitmaps to formats like PNG or JPEG
 * Note that it's unfinished
 */
namespace Img::BitmapEncoding {

    /**
     * Turns a vector<char> containing a raw PNG file into a bitmap
     * @param input A buffer containing a raw PNG file
     * @return A bitmap
     */
    Bitmap fromPNG(const std::vector<char>& input);

    /**
     * Turns a bitmap into a vector<char> containing a raw PNG file
     * @param input A bitmap
     * @return A buffer containing a raw PNG file
     */
    std::vector<char> toPNG(Bitmap input);

};


#endif //IMGTEST_BITMAPENCODING_H
