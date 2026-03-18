#include <iostream>
#include <vector>

struct Point {
    int x, y;
    int* a;
    Point(int x, int y) : x(x), y(y) {
        a = new int(10); }
    void print() {
        std::cout << x << ' ' << y << ' ' << *a << '\n'; }
    ~Point() {
        delete a;
    }
    Point(const Point& other) : x(other.x), y(other.y) {
        a = new int(*other.a);
    }
};
int main() {
    Point p1(10, 20);
    Point p2 = Point(p1);
    p1.print();
    p2.print();
    p1.x = 100;
    *p1.a = 777;
    p1.print();
    p2.print();
}