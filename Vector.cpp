//
//  Vector.cpp
//  vectorMaths
//
//  Created by Aeneas Tews on 02.02.22.
//

#include "Vector.hpp"
#include <math.h>
#include <iostream>

Vector::Vector(double vector[], int size)
: size(size)
{
    directions = new double[size];
    
    for (int i = 0; i < size; i++) {
        directions[i] = vector[i];
    }
}

Vector::Vector(Vector2 v)
: size(2)
{
    directions = new double[2];
    
    std::string vector2 = v.getVector();
    directions[0] = std::stod(vector2.substr(1, 8));
    directions[1] = std::stod(vector2.substr(12, 19));
}

Vector::Vector(Vector3 v)
: size(3)
{
    directions = new double[3];
    
    std::string vector3 = v.getVector();
    directions[0] = std::stod(vector3.substr(1, 8));
    directions[1] = std::stod(vector3.substr(12, 19));
    directions[2] = std::stod(vector3.substr(23, 30));
}

double Vector::calcLength()
{
    double length = 0;
    
    for (int i = 0; i < size; i++) {
        length = sqrt(pow(length, 2) + pow(directions[i], 2));
    }
    
    return length;
}

Vector Vector::normalize()
{
    double *normalizedDirection = new double[size];
    double length = calcLength();
    
    try {
        if (length == 0)
            throw 1;
        for (int i = 0; i < size; i++) {
            normalizedDirection[i] = 1/length * directions[i];
        }
    }
    catch (int) {
        std::cout << "Can't normalize vector of length 0" << std::endl;
        for (int i = 0; i < size; i++) {
            normalizedDirection[i] = 0;
        }
        return Vector(normalizedDirection, size);
    }
    
    return Vector(normalizedDirection, size);
}

std::string Vector::getVector()
{
    std::string vector = "(" + std::to_string(directions[0]);
    
    for (int i = 1; i < size; i++) {
        vector += " / " + std::to_string(directions[i]);
    }
    
    vector += ")";
    
    return vector;
}
