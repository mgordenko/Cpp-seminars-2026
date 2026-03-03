#include <iostream>
#include <deque>
#include <vector>

struct Rectangle {
    double a;
    double b;
    static int count;
    Rectangle(double s1, double s2) {
        a = s1; b = s2;
        ++count;
    }
    double Area() {
        return a * b;
    }
    double Perimetr() {
        return 2 * (a + b);
    }
    void Print() {
        std::cout << a << ' ' << b << ' ' << Area() << ' ' << Perimetr() << '\n';
    }
};
int Rectangle::count = 0;
int main() {
    std::vector<Rectangle> v;
    v.push_back(Rectangle(1, 2));
    v.push_back(Rectangle(2, 3));
    v.push_back(Rectangle(9, 10));
    v.push_back(Rectangle(9, 4));
    std::cout << Rectangle::count << '\n';
    for (int i = 0; i < v.size(); ++i) {
        std::cout << v[i].Area() << '\n';
    }
}
