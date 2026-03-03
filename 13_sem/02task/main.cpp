#include <iostream>
#include <vector>

// Создайте структуру Point, представляющую точку на плоскости с координатами x и y (целые числа).
//
// Напишите функцию double distance(Point a, Point b), которая вычисляет расстояние между двумя точками.
//
// В main запросите у пользователя координаты двух точек и выведите расстояние между ними.
//
// Создайте структуру Rectangle, которая содержит
// две точки: topLeft и bottomRight (используйте структуру Point)
// Напишите функции:
//
// int area() - вычисляет площадь прямоугольника
//
// int perimeter() - вычисляет периметр
//
// Проверьте работу на нескольких прямоугольниках.
// max_element (периметр), sort (периметру), copy_if (значения с площадью больше 20)
#include <iostream>
#include <cmath>
#include <string>
struct Athlete {
    std::string name;
    std::string sport;
    int medals;
    int age;

    Athlete (std::string name1, std::string sport1, int medals1, int age1) {
        name = std::string(name1);
        sport = sport1;
        medals = medals1;
        age = age1;
    }

};

struct Point {
    int x, y;
    Point(int p1 = 0, int p2 = 0) {
        x = p1; y = p2;
    }
};
struct Rectangle {
    Point topLeft;
    Point bottomRight;
    Rectangle(Point p1, Point p2) {
        topLeft = p1;
        bottomRight = p2;
    }
    int area() {
        return std::abs((topLeft.x - bottomRight.x) * (topLeft.y - bottomRight.y));
    }
    int perimeter() {
        return 2 * (std::abs(topLeft.x - bottomRight.x) + std::abs(topLeft.y - bottomRight.y));
    }
    static bool filter(Rectangle r) {
        return r.area() > 20;
    }
};
int main() {
    std::vector<Rectangle> v;
    for (int i = 0; i < 10; ++i) {
        v.emplace_back(Point(i, i), Point(i + i, i + 5));
    }
    for (int i = 0; i < v.size(); ++i) {
        std::cout << v[i].area() << '\n';
    }
    std::vector<Rectangle> v_filtered;
    std::copy_if(v.begin(), v.end(), std::back_inserter(v_filtered), Rectangle::filter);
    for (int i = 0; i < v_filtered.size(); ++i) {
        std::cout << v_filtered[i].area() << '\n';
    }
    return 0;
}
