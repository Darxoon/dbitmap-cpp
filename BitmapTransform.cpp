//
// Created by Jakob on 24/02/2020.
//

#include "BitmapTransform.h"


namespace Img::BitmapTransform {


    Bitmap* transform(Bitmap* original, Transform transform) {
        Bitmap *scaled = scale(original, transform.offsetX, transform.offsetY);
        transform.centerX *= transform.scaleX;
        transform.centerY *= transform.scaleY;
        Bitmap *rotated = rotate(scaled, transform.rotation, transform.centerX, transform.centerY);
        Bitmap *offsetted = offset(rotated, transform.offsetX, transform.offsetY, transform.newWidth, transform.newHeight);

        delete scaled;
        delete rotated;

        return offsetted;
    }

    Bitmap* scale(Bitmap* original, float scaleX, float scaleY) {
        return original; // TODO: implement
    }

    Bitmap* rotate(Bitmap* original, float rotation, float centerX, float centerY) {
        return original; // TODO: implement
    }

    Bitmap *offset(Bitmap *original, float offsetX, float offsetY, int newWidth, int newHeight) {
        return original; // TODO: implement
    }
}