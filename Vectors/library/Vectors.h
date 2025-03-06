//
// Created by futur on 3/3/2025.
//

#ifndef VECTORS_H
#define VECTORS_H

#include <cmath>

struct Vector3D {
    float x, y, z;

    Vector3D() = default;

    Vector3D(float a, float b, float c);

    float& operator[](int i);

    const float& operator[](int i) const;

    Vector3D& operator *=(float s);
    Vector3D& operator /=(float s);
    Vector3D& operator +=(const Vector3D& v);
    Vector3D& operator -=(const Vector3D& v);
};

// Scalar multiplication - new magnitude parallel direction to original vector
// if s > 1 the vector gets longer
// if 0 < s < 1 the vector shrinks
// if s < 0 the direction will be reversed, and the magnitude will shrink based on |s|
inline Vector3D operator *(const Vector3D& v, float s) {
    return Vector3D(v.x * s, v.y * s, v.z * s);
}

// Scalar division - new magnitude parallel direction to original vector
inline Vector3D operator /(const Vector3D& v, float s) {
    s = 1.0f / s;
    return Vector3D(v.x *s, v.y *s, v.z * s);
}

// Negating the vector. Points vector in opposite direction magnitude does not change
inline Vector3D operator -(const Vector3D& v) {
    return (Vector3D(-v.x, -v.y, -v.z));
}

// Function to compute the magnitude of a vector
inline float Magnitude(const Vector3D& v) {
    return (std::sqrt(v.x * v.x + v.y * v.y + v.z * v.z));
}

// Normalize function - turns the vector into a unit vector
inline Vector3D Normalize(const Vector3D& v) {
    return v / Magnitude(v);
}

// vector addition
inline Vector3D operator +(const Vector3D& a,const Vector3D& b) {
    return (Vector3D(a.x + b.x, a.y + b.y, a.z + b.z));
}

inline Vector3D operator -(const Vector3D& a, const Vector3D& b) {
    return (Vector3D(a.x - b.x, a.y - b.y, a.z - b.z));
}

// Finding the distance between 2 vectors
float distance_3D(Vector3D& a, Vector3D& b);

// changing the magnitude of a vector
void change_magnitude(Vector3D& a, float scalar_value);

#endif //VECTORS_H
