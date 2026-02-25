#include <iostream>
#include <cmath>
#include <string>
#include <stack>
#include <vector>

/*
Point(x,y)
создать вектор
и найдем максимально удаленную от 0, 0 точку
 */

struct Point {
    int x;
    int y;
    double distance() {
        return std::sqrt(x * x + y * y);
    }
    void print() {
        std::cout << x << ' ' << y << '\n';
    }
    // ~Point() {
    //     std::cout << "Delete\n";
    // }
};
int main() {
    std::vector<Point*> points;
    points.push_back(new Point{10, 2});
    points.push_back(new Point{7, 2});
    points.push_back(new Point{8, 12});
    points.push_back(new Point{4, 20});
    Point* max = points[0]; // copy!!!
    for (auto p : points) {
        if (max->distance() < p->distance())
            max = p;
    }
    max->print();
    for (auto p : points) {
        delete p;
    }
    // память чистить
}