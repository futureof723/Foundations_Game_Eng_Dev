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



#endif //VECTORS_H
