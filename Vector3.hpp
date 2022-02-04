//
//  Vector3.hpp
//  vectorMaths
//
//  Created by Aeneas Tews on 02.02.22.
//

#ifndef Vector3_hpp
#define Vector3_hpp

#include <stdio.h>
#include <string>
#include "Vector2.hpp"

class Vector3 {
private:
    double x, y, z;
    
public:
    Vector3(double x = 0, double y = 0, double z = 0);
    Vector3(Vector2 v, double z = 0);
    double calcLength();
    Vector3 normalize();
    std::string getVector();
    void setAxis(int axis, double value);
    double getAxis(int axis);
    Vector3 multiply(double scalar);
    Vector3 add(Vector3 v);
};

#endif /* Vector3_hpp */
