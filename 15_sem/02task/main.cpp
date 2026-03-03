#include <iostream>
#include <vector>
#include "point.h"

struct Vector {
    Point start, end;
    Vector(int x1, int y1, int x2, int y2) {
        start = Point(x1, y1);
        end = Point(x2, y2);
    }
    double length() {
        return start.distance(end);
    }
    void printVector() {
        std::cout << "vector:\n";
        start.print();
        end.print();
    }
};
int main() {
    Vector v(1, 2, 3, 4);
    std::cout << v.length() << '\n';
    v.printVector();
    return 0;
}
