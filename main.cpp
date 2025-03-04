#include <cmath>
#include <iostream>
#include <math.h>
#include <valarray>

#include "library/Vectors.h"

float find_magnitude(Vector3D& a);
float distance_3D(Vector3D& a, Vector3D& b);

int main() {
    // using default constructor
    Vector3D v{};
    std::cout << "Vector v using default constructor: " << std::endl;
    std::cout << v[0] << v[1] << v[2] << std::endl;

    Vector3D v2(1.0f,2.0f,3.0f);
    std::cout << "Vector v2 using constructor: " << std::endl;
    std::cout << v2[0] << v2[1] << v2[2] << std::endl;

    std::cout << "Magnitude of Vector v: " << find_magnitude(v) << std::endl;
    std::cout << "Magnitude of Vector v2: " << find_magnitude(v2) << std::endl;

    std::cout << "Distance between v and v2: " << distance_3D(v, v2) << std::endl;

    return 0;
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