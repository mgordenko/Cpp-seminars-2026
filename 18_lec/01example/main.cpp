#include <iostream>
#include <cmath>
#include <string>
#include <stack>
#include <vector>

struct Complex {
    Complex(double re = 0, double im = 0) : re(re), im(im) {}
    void print() const {
        std::cout << re << ' ' << im << '\n';
    }
    Complex(int a) : re(a), im(a) { }
    Complex(const Complex& other) : im(other.im), re(other.re) {
        std::cout << "Complex(const Complex& other)\n";
    }
    Complex(Complex&& other) : im(other.im), re(other.re) {
        std::cout << "Complex(const Complex&& other)\n";
    }
    Complex operator+(Complex y) { // this
        return Complex(re + y.re, im + y.im);
        // RVO
    }
    Complex& operator++() {
        ++re;
        return *this;
    }
    Complex operator++(int) {
        auto old_value = *this;
        ++re;
        return old_value;
    }
    friend std::ostream& operator<<(std::ostream& os, const Complex& c);
    friend std::istream& operator>>(std::istream& is, Complex& c) {
        is >> c.re >> c.im;
        return is;
    }
private:
    double re;
    double im;
};
std::ostream& operator<<(std::ostream& os, const Complex& c) {
    os << c.re << ' ' << c.im << '\n';
    return os;
}
int main() {
    Complex c1;
    c1 = c1 + c1;
    std::cin >> c1;
    std::cout << c1 << c1;
}