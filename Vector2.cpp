//
//  Vector2.cpp
//  vectorMaths
//
//  Created by Aeneas Tews on 02.02.22.
//

#include "Vector2.hpp"
#include <math.h>
#include <iostream>

Vector2::Vector2(double x, double y)
: x(x), y(y)
{
}

double Vector2::calcLength()
{
    return sqrt(pow(x, 2) + pow(y, 2));
}

Vector2 Vector2::normalize()
{
    double x, y;
    double length = calcLength();
    
    try {
        if (length == 0)
            throw 1;
        x = 1/length * this->x;
        y = 1/length * this->y;
    }
    catch (int) {
        std::cout << "Can't normalize vector of length 0" << std::endl;
        return Vector2(0, 0);
    }
    
    return Vector2(x, y);
}

std::string Vector2::getVector()
{
    return "(" + std::to_string(x) + " / " + std::to_string(y) + ")";
}
