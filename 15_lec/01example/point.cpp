//
// Created by Mariia Gordenko on 26.02.2026.
//

#include "point.h"
#include "iostream"

void Point::print() const {
    std::cout << "const" << '\n';
    std::cout << x << ' ' << y << '\n';
}

void Point::print() {
    std::cout << "no const" << '\n';
    std::cout << x << ' ' << y << '\n';
}

Point::Point(int x, int y) {
    this->x = x;
    this->y = y;
}