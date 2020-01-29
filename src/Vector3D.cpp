//
//  Vector3D.cpp
//  Vector3D
//
//  Created by admin on 29/01/2020.
//  Copyright © 2020 vanderkast. All rights reserved.
//

#include <stdio.h>
#include <math.h>

#include "../lib/Vector3D.h"

Vector3D::Vector3D() {
    x = 0;
    y = 0;
    z = 0;
}

Vector3D::Vector3D(float x, float y, float z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

float Vector3D::getX() {
    return x;
}

float Vector3D::getY() {
    return y;
}

float Vector3D::getZ() {
    return z;
}

float Vector3D::length() {
    return sqrt(x * x + y * y + z * z);
}

void Vector3D::add(Vector3D *b){
    this->x += b->x;
    this->y += b->y;
    this->z += b->z;
}

void Vector3D::subtract(Vector3D *b){
    this->x -= b->x;
    this->y -= b->y;
    this->z -= b->z;
}

float Vector3D::multiply(Vector3D *b){
    return this->x * b->x + this->y * b->y + this->z * b->z;
}

void Vector3D::scale(float k) {
    this->x *= k;
    this->y *= k;
    this->z *= k;
}

int Vector3D::compare(Vector3D *b){
    float al = this->length();
    float bl = b->length();
    
    
    if(al >= bl){
        if(al == bl)
            return 0;
        return 1;
    }else
        return -1;
}
