//
// Created by Mariia Gordenko on 26.02.2026.
//

#include "point.h"
#include <iostream>
#include <cmath>

Point::Point(double x, double y) {
    this->x = x; this->y = y;
}
double Point::distance(const Point& other) const {
    return std::sqrt(std::pow(x + other.x,2)
        + std::pow(y + other.y,2));
}
void Point::print() const {
    std::cout << x << ' ' << y << '\n';
}