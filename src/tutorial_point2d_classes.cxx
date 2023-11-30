/*
    Classes are by default private. Public need to be specified. 
    This is vital for encapsulation, as the general aim is to keep
    information private. 
    A crude rule is to make member functions public, keeping the class 
    data members (attributes) private.
*/ 
#include "tutorial_point2d_classes.h"
#include <cmath>
#include <iostream>


void Point2DSphericalClass::setXY(double x, double y) {
    R = std::sqrt(x*x+y*y);
    F = std::atan2(y,x);
}

void Point2DSphericalClass::setRPhi(double r, double phi) {
    R = r;
    F = phi;
}

double Point2DSphericalClass::getX() {
    return R*std::cos(F);
}

double Point2DSphericalClass::getY() {
    return R*std::sin(F);
}

double Point2DSphericalClass::getR() {
    return R;
}

double Point2DSphericalClass::getPhi() {
    return F;
}
