//
//  main.cpp
//  vectorMaths
//
//  Created by Aeneas Tews on 02.02.22.
//
#include "Vector.hpp"
#include "Vector2.hpp"
#include "Vector3.hpp"
#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    double arr[3] = {0, 1, 4};
    Vector v(arr, 3);
    cout << v.normalize().getVector() << endl;
    
    double arr10[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Vector v10(arr10, 10);
    cout << v10.normalize().getVector() << endl;
    
    double arr0[3] = {0, 0, 0};
    Vector v0(arr0, 3);
    cout << v0.normalize().getVector() << endl;
    
    Vector3 *v3;
    v3 = new Vector3(4, 8, 1);
    cout << v3->normalize().getVector() << endl;
    
    Vector v2(Vector2(3, 4));
    cout << v2.normalize().calcLength() << endl;
    
    cout << v3->add(Vector3(3, 5, 2)).getVector() << endl;
    
    double arr2[2] = {4, 3};
    Vector v4(arr2, 2);
    cout << v.add(v4).getVector();
    
    return 0;
}
