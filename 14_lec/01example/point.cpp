//
// Created by Mariia Gordenko on 26.02.2026.
//

#include "point.h"
#include "iostream"

void Point::print() {
    std::cout << x << ' ' << y << '\n';
}

Point::Point(int x1, int y1) { x = x1; y = y1; }