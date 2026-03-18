#include <iostream>
#include <cmath>
#include <string>
#include <stack>
#include <vector>


struct Point {
    int x;
    int y;
    Point() {}
    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }
    Point(const Point& other) : x(other.x), y(other.y) { }
    void print() const {
        std::cout << x << ' ' << y << '\n';
    }
    Point operator+(Point p2) {
        return Point(x + p2.x, y + p2.y);
    }
};

int main() {
    Point p1(5, 4);
    Point p2(3, 9);
    Point p3 = p1 + p2;
    Point p4 = p1.operator+(p2);
    p3.print();
}