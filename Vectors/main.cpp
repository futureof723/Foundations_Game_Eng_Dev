#include <iostream>
#include "library/Vectors.h"

void printVector(const Vector3D& v, const std::string& name) {
    std::cout << name << ": (" << v.x << ", " << v.y << ", " << v.z << ")\n";
}

int main() {
    Vector3D v1(3.0f, 4.0f, 0.0f);
    Vector3D v2(1.0f, 2.0f, 3.0f);

    std::cout << "Vector Operations Demonstration\n";

    // Print original vectors
    printVector(v1, "v1");
    printVector(v2, "v2");

    // Magnitude
    std::cout << "Magnitude of v1: " << Magnitude(v1) << "\n";

    // Normalization
    Vector3D v1_normalized = Normalize(v1);
    printVector(v1_normalized, "Normalized v1");

    // Addition
    Vector3D v3 = v1 + v2;
    printVector(v3, "v1 + v2");

    // Subtraction
    Vector3D v4 = v1 - v2;
    printVector(v4, "v1 - v2");

    // Scalar multiplication
    Vector3D v5 = v1 * 2.0f;
    printVector(v5, "v1 * 2.0");

    // Scalar division
    Vector3D v6 = v1 / 2.0f;
    printVector(v6, "v1 / 2.0");

    // Negation
    Vector3D v7 = -v1;
    printVector(v7, "-v1");

    // Distance between v1 and v2
    std::cout << "Distance between v1 and v2: " << distance_3D(v1, v2) << "\n";

    // Change magnitude of v1
    change_magnitude(v1, 10.0f);
    printVector(v1, "v1 after changing magnitude to 10");

    // Magnitude
    std::cout << "Magnitude of v1: " << Magnitude(v1) << "\n";

    return 0;
}