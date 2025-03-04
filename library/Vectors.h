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
};

float find_magnitude(Vector3D& a);
float distance_3D(Vector3D& a, Vector3D& b);
void change_magnitude(Vector3D& a, float scalar_value);



#endif //VECTORS_H
