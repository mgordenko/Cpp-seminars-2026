#include <iostream>
#include <vector>
#include <chrono>
struct A {
    A() {
        std::cout << "A()" << '\n';
    }
};
struct Point {
    int x;
    int y;
    A a;
    Point() : Point(0) {
        std::cout << "Point()" << '\n';
    }
    Point(int value) :Point(value, value) {
        std::cout << "Point(value)" << '\n';
    }
    Point(int side1, int side2) {
        x = side1; y = side2;
        std::cout << "Point(int side1, int side2)" << '\n';
    }
    void print() {
        std::cout << x << ' ' << y << '\n';
    }
};

int main() {
    Point p = Point();

}