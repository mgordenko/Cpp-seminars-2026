#include <iostream>
#include <unordered_set>

class Point {
private:
    int x;
    int y;

public:
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
        return p.getX() + p.getY();
    }
};

int main() {
    std::unordered_set<Point, PointHash> points;
    points.insert(Point(1, 2));
    points.insert(Point(1, 2));
    points.insert(Point(1, 2));
    points.insert(Point(4, 3));
    points.insert(Point(3, 4));
    points.insert(Point(5, 6));
    points.insert(Point(7, 8));
    std::cout << "Размер множества: " << points.size() << std::endl;
    std::cout << "Точки в множестве:" << std::endl;
    for (const auto& point : points) {
        std::cout << point << std::endl;
    }

    Point searchPoint(3, 4);
    auto it = points.find(searchPoint);

    if (it != points.end()) {
        std::cout << "Точка " << searchPoint << " найдена в множестве" << std::endl;
    } else {
        std::cout << "Точка " << searchPoint << " не найдена в множестве" << std::endl;
    }

    Point nonExistentPoint(10, 20);
    it = points.find(nonExistentPoint);

    if (it != points.end()) {
        std::cout << "Точка " << nonExistentPoint << " найдена в множестве" << std::endl;
    } else {
        std::cout << "Точка " << nonExistentPoint << " не найдена в множестве" << std::endl;
    }

    return 0;
}