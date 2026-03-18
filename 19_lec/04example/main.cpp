#include <iostream>
#include <iostream>
#include <string>
#include <vector>

class Figure {
    std::string name_;
    public:
        Figure(std::string name) : name_(std::move(name)) {
            std::cout << " Figure(std::string name)\n";
        }
        Figure(const Figure& other) : name_(std::move(other.name_)) {
            std::cout << " Figure(const Figure& other)\n";
        }
        virtual double peremitr() = 0;
        void print() {
            std::cout << name_  << ' ' << peremitr() << std::endl;
        }
        virtual ~Figure() {
            std::cout << "~Figure()\n";
        }
};
class Rectangle final : public Figure {
    int a, b;
    public:
    Rectangle(std::string name, int a, int b) : Figure(std::move(name)),
        a(a), b(b) {
        std::cout << " Rectangle(std::string name, int a, int b)\n";
    }
    double peremitr() override { return 2 * (a + b); }
    ~Rectangle() {
        std::cout << "~Rectangle()\n";
    }
};
int main() {
    // Figure f1 = Figure("Figure");
    // f1.print();
    // Figure* f2 = new Figure("Figure");
    // f2->print();
    // Figure f3 = Rectangle("Rectangle", 10, 5);
    // f3.print();
    Figure* f4 = new Rectangle("Rectangle", 10, 5);
    f4->print();
    delete f4;
    return 0;
}