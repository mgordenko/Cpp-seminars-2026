#include <iostream>
#include <cmath>
#include <string>
#include <stack>
#include <vector>
class Figure {
public:
    std::string name;
    int perimetr() {
        return 0;
    }
    void print() {
        std::cout << "Figure\n";
    }
};
class Triangle : public Figure {
public:
    Triangle(std::string name, int a, int b, int c) : a(a), b(b), c(c) { this->name = name; }
    int a, b, c;
    int perimetr() {
        return a + b + c;
    }
    void print() {
        std::cout << name << " " << perimetr() << ' ';
    }
};

class Circle : public Figure {
public:
    int r;
    Circle(std::string name, int r) : r(r) { this->name = name; }
    int perimetr() {
        return 6 * r;
    }
    void print() {
        std::cout << name << " " << perimetr() << ' ';
    }
};

int main() {
    Circle circle("Circle", 10);
    std::cout <<  circle.perimetr() << '\n';
    circle.print();
    Triangle tri("Triangle", 3, 4, 5);
    std::cout <<  tri.perimetr() << '\n';
    tri.print();
}