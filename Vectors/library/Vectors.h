//
// Created by futur on 3/3/2025.
//

#ifndef VECTORS_H
#define VECTORS_H

struct Vector3D {
    float x, y, z;

    Vector3D() = default;

    Vector3D(float a, float b, float c);

    float& operator[](int i);

    const float& operator[](int i) const;

    Vector3D& operator *=(float s);
    Vector3D& operator /=(float s);
};

// Scalar multiplication - new magnitude parallel direction to original vector
// if s > 1 the vector gets longer
// if 0 < s < 1 the vector shrinks
// if s < 0 the direction will be reversed, and the magnitude will shrink based on |s|
inline Vector3D operator *(const Vector3D& v, float s);

// Scalar division (in-place)
inline Vector3D operator /(const Vector3D& v, float s);

// Negating the vector. Points vector in opposite direction magnitude does not change
inline Vector3D operator -(const Vector3D& v);

// vector addition
inline Vector3D operator +(const Vector3D& a,const Vector3D& b);

inline Vector3D operator -(const Vector3D& a,const Vector3D& b);

// Function to compute the magnitude of a vector
inline float Magnitude(const Vector3D& v);

// Normalize function
inline Vector3D Normalize(const Vector3D& v);

// Finding the distance between 2 vectors
float distance_3D(Vector3D& a, Vector3D& b);

// changing the magnitude of a vector
void change_magnitude(Vector3D& a, float scalar_value);

#endif //VECTORS_H
