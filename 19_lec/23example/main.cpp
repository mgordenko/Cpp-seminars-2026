#include <iostream>
#include <math.h>
#include <vector>
#include <cmath>

class Shape {
    public:
    virtual double area() const {
        return 0;
    }
    virtual double perimeter() const {
        return 0;
    }
    virtual void print() const {}
    virtual ~Shape() {
        std::cout << "Shape::~Shape()\n";
    }
};
class Circle : public Shape {
    int r;
public:
    explicit Circle(int r) : r(r) {}
    double area() const override {
        return M_PI * r * r;
    }
    double perimeter() const override {
        return 2 * M_PI * r;
    }
    void print() const override {
        std::cout << "Circle(" << r << ") " << area() << ' ' << perimeter() << '\n';
    }
    ~Circle() override {
        std::cout << "Circle::~Circle()\n";
    }
};
class Rectangle : public Shape {
    double a, b;
public:
    Rectangle(double a, double b) : a(a), b(b) {}
    double area() const override {
        return a * b;
    }
    double perimeter() const override {
        return 2 * (a + b);
    }
    void print() const override {
        std::cout << "Rectangle(" << a << ", " << b << ") " << area() << ' ' << perimeter() << '\n';
    }
    ~Rectangle() override {
        std::cout << "Rectangle::~Rectangle()\n";
    }
};
class Triangle : public Shape {
    double a, b, c;
public:
    Triangle(double a, double b, double c) : a(a), b(b), c(c) {}
    double area() const override {
        double p = (a + b + c) / 2;
        return std::sqrt(p * (p - a) * (p - b) * (p - c));
    }
    double perimeter() const override {
        return (a + b + c);
    }
    void print() const override {
        std::cout << "Triangle(" << a << ", " << b << ", " << c << ") " << area() << ' ' << perimeter() << '\n';
    }
    ~Triangle() override {
        std::cout << "Triangle::~Triangle()\n";
    }
};
int main() {
    std::vector<Shape*> v;
    v.emplace_back(new Circle(10));
    v.emplace_back(new Circle(20));
    v.emplace_back(new Rectangle(12, 20));
    v.emplace_back(new Rectangle(10, 21));
    v.emplace_back(new Triangle(12, 20, 10));
    v.emplace_back(new Triangle(16, 21, 10));
    for (auto* p : v) {
        p->print();
    }
    for (auto* p : v) {
        delete p;
    }
    return 0;
}
