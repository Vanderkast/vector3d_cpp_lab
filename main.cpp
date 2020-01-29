//
//  main.cpp
//  Vector3D
//
//  Created by admin on 29/01/2020.
//  Copyright © 2020 vanderkast. All rights reserved.
//

#include <iostream>

#include "lib/Vector3D.h"

void print(Vector3D *);

using namespace std;

int main(int argc, const char * argv[]) {
    Vector3D *a = new Vector3D(1,1,1);
    Vector3D *b = new Vector3D(1,2,3);
    
    cout << "a: ";
    print(a);
    
    cout << "\nb: ";
    print(b);
    
    cout << "\na = a + b: ";
    a->add(b);
    print(a);
    
    cout << "\na = a - b: ";
    a->subtract(b);
    print(a);
    
    cout << "\nb length: " << b->length();
    
    cout << "\na = (a, b): " << a->multiply(b);
    
    cout << "\na = a * 7: ";
    a->scale(7);
    print(a);
    
    cout << "\na compare b: " << a->compare(b);
    
    cout << endl;
    return 0;
}

void print(Vector3D *a) {
    cout << "(" << a->getX() << "; " << a->getY() << "; " << a->getZ() << ")";
}
