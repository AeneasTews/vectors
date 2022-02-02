//
//  Vector2.hpp
//  vectorMaths
//
//  Created by Aeneas Tews on 02.02.22.
//

#ifndef Vector2_hpp
#define Vector2_hpp

#include <stdio.h>
#include <string>

class Vector2 {
private:
    double x, y;
    
public:
    Vector2(double x = 0, double y = 0);
    Vector2();
    double calcLength();
    Vector2 normalize();
    std::string getVector();
};

#endif /* Vector2_hpp */
