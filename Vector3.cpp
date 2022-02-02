//
//  Vector3.cpp
//  vectorMaths
//
//  Created by Aeneas Tews on 02.02.22.
//

#include "Vector3.hpp"
#include <math.h>
#include <iostream>

Vector3::Vector3(double x, double y, double z)
: x(x), y(y), z(z)
{
}

Vector3::Vector3(Vector2 v, double z)
: z(z)
{
    std::string vector2 = v.getVector();
    double x = std::stod(vector2.substr(1, 8));
    double y = std::stod(vector2.substr(12, 19));
    
    this->x = x;
    this->y = y;
}

double Vector3::calcLength()
{
    return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}

Vector3 Vector3::normalize()
{
    double x, y, z;
    double length = calcLength();
    
    try {
        if (length == 0)
            throw 1;
        x = 1/length * this->x;
        y = 1/length * this->y;
        z = 1/length * this->z;
    }
    catch (int) {
        std::cout << "Can't normalize vector of length 0" << std::endl;
        return Vector3(0, 0, 0);
    }
    
    return Vector3(x, y, z);
}

std::string Vector3::getVector()
{
    return "(" + std::to_string(x) + " / " + std::to_string(y) + " / " + std::to_string(z) + ")";
}
