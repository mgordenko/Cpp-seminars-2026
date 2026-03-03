#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include "point.h"
bool cmp(Point* a, Point* b) {
    Point zero(0, 0);
    return a->distance(zero) < b->distance(zero);
}
int main() {
    std::random_device rd;
    std::mt19937 g(rd());
    std::uniform_int_distribution<int> dist_int(0, 10);
    int size = 10;
    std::vector<Point*> points;
    points.reserve(size);
    for (int i = 0; i < size; ++i) {
        points.push_back(new Point(dist_int(g), dist_int(g)));
    }
    for (auto p : points) {
        p->print();
    }
    std::cout << "sort\n";
    std::sort(points.begin(), points.end(), cmp);
    for (auto p : points) {
        p->print();
    }
    for (int i = 0; i < size; ++i) {
        delete points[i];
    }
    return 0;
}