#include <iostream>
#include "Vectors.h"

int main() {
    // using default constructor
    Vector3D v{};
    std::cout << "Vector v using default constructor: " << std::endl;
    std::cout << v[0] << v[1] << v[2] << std::endl;

    Vector3D v2(1.0f,2.0f,3.0f);
    std::cout << "Vector v2 using constructor: " << std::endl;
    std::cout << v2[0] << v2[1] << v2[2] << std::endl;

    return 0;
}