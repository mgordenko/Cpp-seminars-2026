#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include "point.h"
#include <iostream>
#include <cmath>

class Rectangle {
    int x, y;
    int width, height;
public:
    Rectangle(int x, int y, int width, int height) {
        this->x = x; this->y = y; this->width = width; this->height = height;
    }

    int area() {
        return width * height;
    }

    int perimeter() {
        return 2 * (width + height);
    }

    int get_x() const {
        return x;
    }

    int get_y() const {
        return y;
    }

    int get_w() const {
        return width;
    }

    int get_h() const {
        return height;
    }

    void move(int x, int y) {
        this->x = x;
        this->y = y;
    }

    Rectangle intersection(const Rectangle& other) {
        int res_x = (std::max(x, other.get_x()));
        int	res_y = (std::max(y, other.get_y()));
        int res_x_rb = std::min(x + width, other.get_x() + other.get_w());
        int res_y_rb = std::min(y + height, other.get_y() + other.get_h());
        if (res_x < res_x_rb || res_y < res_y_rb) {
            return Rectangle(res_x, res_y, res_x_rb - res_x, res_y_rb - res_y);
        }
        else {
            return Rectangle(0, 0, 0, 0);
        }
    }
};
int main() {
    Rectangle r1 = Rectangle(0, 0, 3, 3);
    Rectangle r2 = Rectangle(1, 1, 3, 3);

    std::cout << r1.intersection(r2).area();
    return 0;
}