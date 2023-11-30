// Structs are by default public. One can add private members. 
#include <iostream>
#include "tutorial_point2d_classes.h"
struct Point2DStruct {
    double x,y;
};

void struct_demo() {
    Point2DStruct p {1.0, 2.0};
    std::cout << " 2D Point (struct) p(" << p.x << ", " << p.y << ")\n";
    p.x = 4.0;
    p.y = 5.0;
    std::cout << " 2D Point (struct) p(" << p.x << ", " << p.y << ")\n";
    Point2DStruct q = p;
    q.x = 3.0; // elements are copied but p,q remain independent
    std::cout << " 2D Point (struct) q(" << q.x << ", " << q.y << ")\n";
}

void classes_demo(){
    Point2DSphericalClass p;
    p.setXY(2.0, 3.0);
    std::cout << " Spherical point (class) p(x=" << p.getX() 
              << ", y=" << p.getY() << ")\n";
    std::cout << " Spherical point (class) p(r=" << p.getR() 
              << ", phi=" << p.getPhi() << ")\n";
}

int main(int argc, char** argv) {
    struct_demo();
    classes_demo();
    return 0;
}