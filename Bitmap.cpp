//
// Created by Jakob on 23/02/2020.
//

#include "Bitmap.h"

namespace Img {
    Color Bitmap::get(int x, int y) {
        return *(data + y * width + x);
    }
    void Bitmap::set(int x, int y, Color value) {
        *(data + y * width + x) = value;
    }


    Bitmap::Bitmap(int w, int h, Color defaultColor) {
        width = w;
        height = h;
        length = w * h;
        data = new Color[h * w];
        for (int i = 0; i < length; ++i) {
            *(data + i) = defaultColor;
        }
    }

    Bitmap::~Bitmap() {
        delete[] data;
    }

    int Bitmap::getWidth() {
        return width;
    }
    int Bitmap::getHeight() {
        return height;
    }
    int Bitmap::getLength() {
        return length;
    }
}