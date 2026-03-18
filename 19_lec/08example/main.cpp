#include <iostream>
#include <vector>
struct Point {
    int x, y;
    Point() { std::cout << "Point()\n"; }
    Point(int a) { std::cout << "Point(int a)\n"; }
    Point(const Point& point) { std::cout << "Point(const Point& point)\n"; }
    ~Point() { std::cout << "~Point()\n"; }
};
int main() {
    std::vector<Point> points;
    points.reserve(4);
    points.emplace_back();
    points.emplace_back(5);
    points.emplace_back(5);
    points.emplace_back(5);
}
