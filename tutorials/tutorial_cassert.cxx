#include <cassert>
#include <cmath>
#include "tutorial_custom_headers.h"

void test_one() {
    assert((1.0==mysqrt(1.0)));
}

void test_two() {
    assert(fabs(1.41421356237309504880-mysqrt(2.0))<1.e-10);
}

int main() {
    test_one();
    test_two();
}

