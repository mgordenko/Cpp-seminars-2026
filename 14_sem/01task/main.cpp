#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
/*
1.  Объявить структуру Triangle, которая хранит длины трёх сторон (`a`, b, `c`).
2.  Создать вектор из N треугольников.
3.  Для каждого треугольника вычислить:
    Периметр (сумма сторон).
    Площадь (по формуле Герона).
4.  Найти треугольник с максимальной площадью
5.  Вывести его стороны и площадь.
 */

struct Triangle {
    int a, b, c;
    Triangle(int s1, int s2, int s3) {
        a = s1; b = s2; c = s3;
    }
    int Perimetr() {
        return a + b + c;
    }
    double Area() {
        double p = (a + b + c) / 2.0;
        return std::sqrt(p * (p - a) * (p - b) * (p - c));
    }
    void Print() {
        std::cout << a << ' ' << b << '\n';
    }
};
bool comp(Triangle& t1, Triangle& t2) {
    return t1.Area() < t2.Area();
}
int main() {
    std::vector<Triangle> v;
    v.push_back(Triangle(10, 7, 5));
    v.push_back(Triangle(3, 4, 5));
    v.push_back(Triangle(6, 7, 5));
    v.push_back(Triangle(3, 7, 5));
    for (auto& p: v) {
        p.Print();
    }
    Triangle tr_max = v[0];
    std::sort(v.begin(), v.end(), comp);
    for (auto& p: v) {
        if (p.Area() > tr_max.Area())
            tr_max = p;
    }
    std::cout << '\n';
    tr_max.Print();
}