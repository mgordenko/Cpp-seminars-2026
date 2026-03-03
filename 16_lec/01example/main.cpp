#include <iostream>
#include <cmath>
#include <string>
#include <stack>
#include <vector>
struct A {
    int a;
};
struct Point {
    int x;
    int y;
    Point() {
        std::cout << "Point()" << '\n';
    }
    explicit Point(A a) : x(a.a), y(a.a) { }
    Point(int value) : x(value), y(value) { }
    // Point p(10) --> Point x = 10, y = 10

    Point(int side1, int side2) {
        x = side1; y = side2;
        std::cout << "Point(int side1, int side2)" << '\n';
    }
    Point(Point& copy) : x(copy.x), y(copy.y) {
        std::cout << "Point(Point& copy)" << '\n';
    }
    void print() {
        std::cout << x << ' ' << y << '\n';
    }
};
struct Rectangle {
    Point p1;
    Point p2;
    Rectangle(int x1, int y1, int x2, int y2) : p1(x1, y1), p2(x2, y2) { }
    Rectangle(Point& p1, Point& p2) : p1(p1), p2(p2) { }
    double Perimetr() {
        return 2 * std::abs(p1.x - p2.x) + 2 * std::abs(p1.y - p2.y);
    }
};
void smth(Point p) {
}
int main() {
    // Rectangle r(0, 0, 10, 20);
    // std::cout << r.Perimetr();
    Point p1(10);
    Point p2 = 20;
    Point p3 = (Point)10;
    A a; a.a = 100;
    Point p4 = (Point)a;
    p4.print();
    smth(p1);
    //smth(777);
    smth((Point)10);
}