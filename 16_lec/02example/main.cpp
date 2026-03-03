#include <iostream>
#include <vector>
struct A {
    A() { std::cout << "A()\n"; }
};
struct B {
    B() {}
    B(int a) { std::cout << "B(int a)\n"; }
};
struct Point {
    int x, y; A a; B b;
    Point() : a(), b(10) { std::cout << "Point()\n"; }
    void print() {
        std::cout << x << ' ' << y << '\n';
    }
};
int main() {
    Point p = Point();
    p.print();
}