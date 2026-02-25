#include <iostream>
#include <vector>

struct Point {
    int x, y;
    inline static int count = 0;
    Point(int c1, int c2) {
        count += 1;
        x = c1; y = c2;
    }
    void Print() {
        std::cout << x << ' ' << y << '\n';
    }
};
int main() {
    Point* point1 = new Point(10, 20);
    Point* point2 = new Point(90, 10);
    Point* point3 = new Point(100, 2);
    std::cout << Point::count;
}