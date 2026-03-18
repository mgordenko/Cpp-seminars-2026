#include <iostream>
#include <cmath>
#include <string>
#include <stack>
#include <vector>

class Figure {
protected:
    std::string name;
public:
    explicit Figure(const std::string &name) : name(name) {}
    virtual double perimeter() const = 0;
    void print() {
        std::cout << name  << ' ' << perimeter() << '\n';
    }
    virtual ~Figure() {
        std::cout << "~Figure()\n";
    }
};
class Rectangle : public Figure {
    int a, b;
public:
    explicit Rectangle(int a, int b) : Figure("Rectangle"), a(a), b(b) {}
    double perimeter() const override {
        return 2 * (a + b);
    }
    ~Rectangle() {
        std::cout << "~Rectangle()\n";
    }
};
class Triangle : public Figure {
protected:
    int a, b, c;
public:
    explicit Triangle(int a, int b, int c) : Figure("Triangle"), a(a), b(b), c(c) {}
    double perimeter() const final {
        return (a + b + c);
    }
    ~Triangle() {
        std::cout << "~Triangle()\n";
    }
};
class SuperTriangle : public Triangle {
public:
    explicit SuperTriangle(int a) : Triangle(a, a, a) {}
    ~SuperTriangle() {
        std::cout << "~SuperTriangle()\n";
    }
};

int main() {
    std::vector<Figure*> figures;
    figures.push_back(new Rectangle(10, 20));
    figures.push_back(new Rectangle(10, 20));
    figures.push_back(new Triangle(10, 20, 15));
    figures.push_back(new Rectangle(10, 20));
    for (const auto &f : figures)
        f->print();
    for (auto &f : figures)
        delete f;
    return 0;
}