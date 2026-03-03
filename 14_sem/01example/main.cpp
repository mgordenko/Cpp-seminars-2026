#include <iostream>
#include <vector>
#include <cmath>
#include "point.h"

int main() {
    Point p1(10, 20);
    Point p2(5, 16);
    Point zero(0, 0);
    if (p1.distance(zero) > p2.distance(zero))
        p1.print();
    else
        p2.print();
}
