#include <iostream>
#include <vector>
#include "point.h"

int main() {
    Point point(10, 20);
    point.print();
    const Point point2(11, 22);
    point2.print();
}
