//
//  Vector3D.h
//  Vector3D
//
//  Created by admin on 29/01/2020.
//  Copyright © 2020 vanderkast. All rights reserved.
//

#ifndef Vector3D_h
#define Vector3D_h

class Vector3D {
private:
    float x, y, z;
    
public:
    Vector3D();
    Vector3D(float, float, float);
    
    float getX();
    float getY();
    float getZ();
    
    float length();
    
    void add(Vector3D*);
    void subtract(Vector3D*);
    float multiply(Vector3D*);
    void scale(float);
    int compare(Vector3D*);
};

#endif /* Vector3D_h */
