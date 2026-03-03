#include <iostream>
#include <vector>
class Point {
    int x, y;
    inline static int count = 0;
public:
    void print() const {
        std::cout << x << '-' << y << '\n';
    }
    void print() {
        std::cout << x << '*' << y << '\n';
    }
    void change() {
        x += 1; y += 1;
    }
    Point(int x1, int y1) { x = x1; y = y1; ++count; }
    static int getCount() {
        return count;
    }
};
int main() {
    const Point p(10, 20);
    p.print();
    Point p2(10, 20);
    p2.print();
    std::cout << '\n';
    std::cout << Point::getCount();
}