#include <iostream>
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


int main(int argc, char** argv) {
    struct_demo();
    return 0;
}