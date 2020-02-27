//
// Created by Jakob on 24/02/2020.
//

#include "Bitmap.h"
#include "Transform.h"

#ifndef IMGTEST_BITMAPTRANSFORM_H
#define IMGTEST_BITMAPTRANSFORM_H

/**
 * Transforms a bitmap
 * Note that it's unfinished
 */
namespace Img::BitmapTransform {

    /**
     * Transforms a bitmap
     * @param original The original bitmap
     * @param transform The transform struct that contains the information
     * @return The transformed bitmap
     */
    Bitmap* transform(Bitmap* original, Transform transform);

    /**
     * Scales a bitmap
     * @param original The original bitmap
     * @param scaleX How much it should be scaled on the X axis
     * @param scaleY How much it should be scaled on the Y axis
     * @return The transformed bitmap
     */
    Bitmap* scale(Bitmap* original, float scaleX, float scaleY);

    /**
     * Rotates a bitmap
     * @param original The original bitmap
     * @param rotation The rotation in degrees. 0° is nothing, 90° is a right angle clockwise, 360° is nothing again
     * @return The transformed bitmap
     */
    Bitmap* rotate(Bitmap* original, float rotation, float centerX, float centerY);

    /**
     * Puts the bitmap on a new transparent bitmap with a width and height and with the offset of the original bitmap
     * @param original The original bitmap
     * @param offsetX The X offset of the original bitmap
     * @param offsetY The Y offset of the original bitmap
     * @param newWidth The new width of the bitmap
     * @param newHeight The new height of the bitmap
     * @return The transformed bitmap
     */
    Bitmap* offset(Bitmap* original, float offsetX, float offsetY, int newWidth, int newHeight);

}

#endif //IMGTEST_BITMAPTRANSFORM_H
