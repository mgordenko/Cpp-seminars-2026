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
    virtual double perimeter() const {
        return 0;
    }
    virtual void print() const {
        std::cout << name  << ' ' << perimeter() << '\n';
    }
};
class Rectangle : public Figure {
    int a, b;
    public:
    explicit Rectangle(int a, int b) : Figure("Rectangle"), a(a), b(b) {}
    double perimeter() const {
        return 2 * (a + b);
    }
    void print() const {
        std::cout << name  << ' ' << perimeter() << '\n';
    }
};

int main() {
    Figure f1 = Figure("Figure");
    Figure f2 = Rectangle(10, 20);
    f1.print();
    f2.print();
    Figure* pf1 = new Figure("Figure");
    Figure* pf2 = new Rectangle(10, 20);
    Rectangle* pf3 = new Rectangle(10, 20);
    pf1->print();
    pf2->print();
    pf3->print();
    delete pf1;
    delete pf2;
}