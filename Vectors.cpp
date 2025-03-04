//
// Created by futur on 3/3/2025.
//

#include "Vectors.h"

Vector3D::Vector3D(float a, float b, float c) {
    x = a;
    y = b;
    z = c;
}

float& Vector3D::operator[](int i) {
    return (&x)[i];
}

const float& Vector3D::operator[](int i) const {
    return (&x)[i];
}