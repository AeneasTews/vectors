//
//  Vector.hpp
//  vectorMaths
//
//  Created by Aeneas Tews on 02.02.22.
//

#ifndef Vector_hpp
#define Vector_hpp

#include <stdio.h>
#include <string>
#include "Vector2.hpp"
#include "Vector3.hpp"

class Vector {
private:
    double *directions;
    int size;
    
public:
    Vector(double vector[], int size);
    Vector(Vector2 v);
    Vector(Vector3 v);
    double calcLength();
    Vector normalize();
    std::string getVector();
};

#endif /* Vector_hpp */
