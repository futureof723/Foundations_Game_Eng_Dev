//
// Created by futur on 3/3/2025.
//

#include "Vectors.h"
#include "cmath"

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

float find_magnitude(Vector3D& a) {
    const float x = a[0] * a[0];
    const float y = a[1] * a[1];
    const float z = a[2] * a[2];
    return sqrt(x + y + z);
}

float distance_3D(Vector3D& a, Vector3D& b) {
    const float dx = a[0] - b[0];
    const float dy = a[1] - b[1];
    const float dz = a[2] - b[2];
    return sqrt(dx * dx + dy * dy + dz * dz);
}

void change_magnitude(Vector3D& a,float scalar_value) {
    a[0] *= scalar_value;
    a[1] *= scalar_value;
    a[2] *= scalar_value;
}