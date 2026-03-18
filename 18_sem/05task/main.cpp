#include <iostream>
#include <unordered_set>
#include <vector>

struct Point {
    int x, y;
    Point(int x, int y) : x(x), y(y) {}
    int getX() const { return x; }
    int getY() const { return y; }
    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }
    friend std::ostream& operator<<(std::ostream& os, const Point& p) {
        os << "(" << p.x << ", " << p.y << ")";
        return os;
    }
};
struct PointHash {
    size_t operator()(const Point& p) const {
        return p.x + p.y;
    }
};
int main() {
    std::unordered_set<Point, PointHash> points;
    points.insert(Point(1, 2));
    points.insert(Point(3, 4));
    points.insert(Point(1, 2));
    points.insert(Point(5, 6));
    points.insert(Point(10, 1));
    for (const auto& point : points) {
        std::cout << point << '\n';
    }
}