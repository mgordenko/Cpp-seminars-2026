#include <iostream>
#include <vector>
struct Point {
    int x, y;
    Point() : Point(0) {
        std::cout << " Point()\n";
    }
    Point(int a) : Point(a, a) {
        std::cout << " Point(int a)\n";
    }
    Point(int a, int b) {
        x = a; y = b;
        std::cout << " Point(int a, int b)\n";
    }
    void print() {
        std::cout << x << ' ' << y << '\n';
    }
};
int main() {
    Point p = Point(10);
    p.print();
}