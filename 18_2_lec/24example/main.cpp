#include <iostream>

struct Complex {
    Complex() {}
    Complex(double re, double im) : re(re), im(im) { }
    void print() const {
        std::cout << re << ' ' << im << '\n';
    }
    Complex operator-(Complex& b) { // this
        return Complex(this->re - b.re, this->im - b.im);
    }
    Complex operator+(int a) {
        return Complex(re + a, im);
    }
    Complex(double a) : re(a), im(0) { }
    Complex& operator++() {
        ++re;
        return *this;
    }
    Complex operator++(int) {
        auto old_value = *this;
        ++re;
        return old_value;
    }
    friend std::ostream& operator<<(std::ostream& os, const Complex& b) {
        std::cout << b.re << ' ' << b.im << '\n';
        return os;
    }
    friend std::istream& operator>>(std::istream& is, Complex& b);
    friend Complex operator+(int a, Complex& b);
    friend Complex operator+(Complex& a, Complex& b);
private:
    double re;
    double im;
};
Complex operator+(int a, Complex& b) {
    return Complex(a + b.re, b.im);
}
Complex operator+(Complex& a, Complex& b) {
    return Complex(a.re + b.re, a.im + b.im);
}

std::istream& operator>>(std::istream& is, Complex& b) {
    std::cin >> b.re >> b.im;
    return is;
}
int main() {
    Complex c1(10, 20);
    Complex c2(5, 4);
    std::cout << c1 << c2 << '\n';
    Complex c3;
    std::cin >> c3;
    std::cout << c3;

}