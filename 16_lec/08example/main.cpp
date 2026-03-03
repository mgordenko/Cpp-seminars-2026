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
    explicit Point(int value) : x(value), y(value) { }
    Point(int side1, int side2) {
        x = side1; y = side2;
        std::cout << "Point(int side1, int side2)" << '\n';
    }
    void print() {
        std::cout << x << ' ' << y << '\n';
    }
};
struct Rectangle {
    Point p1;
    Point p2;
    Rectangle(int x1, int y1, int x2, int y2) : p1(x1, y1), p2(x2, y2) { }
    // Rectangle(Point p1, Point p2) {
    //     this->p1 = p1;
    //     this->p2 = p2;
    // }
    double Perimetr() {
        return 2 * std::abs(p1.x - p2.x) + 2 * std::abs(p1.y - p2.y);
    }
};

void somePoint(Point p) {
    p.print();
}

struct A {
    A() {
        std::cout << "A\n";
    }
};
class B {
    A a;
    B(int a) {}
    // B() : a() { }
};

int main() {
    // Rectangle r = Rectangle(0, 0, 10, 20);
    // std::cout << r.Perimetr();
    // Point p(10);
    // somePoint(p);
    B b = B();
}