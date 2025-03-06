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

// Scalar multiplication (in-place)
Vector3D& Vector3D::operator *=(float s) {
    x *=s;
    y *=s;
    z *=s;
    return (*this);
}
// Scalar division (in-place)
Vector3D& Vector3D::operator /=(float s) {
    s = 1.0f / s;
    x *=s;
    y *=s;
    z *=s;
    return (*this);
}

Vector3D& Vector3D::operator +=(const Vector3D& v) {
    x += v.x;
    y += v.y;
    z += v.z;
    return (*this);
}

Vector3D& Vector3D::operator -=(const Vector3D& v) {
    x -= v.x;
    y -= v.y;
    z -= v.z;
    return (*this);
}

// Finding the distance between 2 vectors
float distance_3D(Vector3D& a, Vector3D& b) {
    const float dx = a[0] - b[0];
    const float dy = a[1] - b[1];
    const float dz = a[2] - b[2];
    return std::sqrt(dx * dx + dy * dy + dz * dz);
}

// changing the magnitude of a vector
void change_magnitude(Vector3D& a,float scalar_value) {
    a = Normalize(a) * scalar_value;
}