#include "tutorial_custom_headers.h"
double mysqrt(double a) {
    double x = 0.5 * a;
    for (int i = 0; i < 10; i++)
    {
        x = 0.5 * (x + a/x);
    }
    return x;
}