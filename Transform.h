//
// Created by Jakob on 24/02/2020.
//

#ifndef IMGTEST_TRANSFORM_H
#define IMGTEST_TRANSFORM_H

namespace Img {
    /**
     * Contains the transform information for BitmapTransform::transform
     */
    struct Transform {
        float scaleX, scaleY;

        float centerX, centerY;
        float rotation;

        float offsetX, offsetY;
        int newWidth, newHeight;
    };
}

#endif //IMGTEST_TRANSFORM_H
