#ifndef POINT2D_
#define POINT2D_
// One way is to define everything in a header file.

// class Point2DSphericalClass {
// public:
//     void setXY(double x, double y) {
//         R = std::sqrt(x*x+y*y);
//         F = std::atan2(y,x);
//     };
//     void setRPhi(double r, double phi) {
//         R = r;
//         F = phi;
//     };
// private:
//     double R{}, F{};
// };

// The other way is to split.

class Point2DSphericalClass {
public:
    void setXY(double x, double y);
    void setRPhi(double r, double phi);
    double getX();
    double getY();
    double getR();
    double getPhi();
private:
    double R {}, F {};
};

#endif