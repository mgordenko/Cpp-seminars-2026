#include <iostream>
#include <cmath>
#include <string>
#include <stack>
#include <vector>

/*
Point(x,y)
 */
struct Point {
    int x;
    int y;
    Point(int side1 = 0, int side2 = 0) {
        x = side1; y = side2;
    }
    void print() {
        std::cout << x << ' ' << y << '\n';
    }
};

struct Rectangle {
    Point p1;
    Point p2;
    Rectangle(int x1, int y1, int x2, int y2) {
        p1 = Point(x1, y1);
        p2 = Point(x2, y2);
    }
    Rectangle(Point p1_, Point p2_) {
        p1 = p1_;
        p2 = p2_;
    }
    double Perimetr() {
        return 2 * std::abs(p1.x - p2.x) + 2 * std::abs(p1.y - p2.y);
    }
};

int main() {
    Rectangle r = Rectangle(0, 0, 10, 20);
    std::cout << r.Perimetr();
}