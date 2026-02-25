#include <iostream>
#include <vector>

struct Complex {
    double re;  // действительная часть
    double im;  // мнимая часть
    void print() {
        std::cout << re << ' ' << im << '\n';
    }
};

int main() {
    Complex c1;
    c1.im = 10; c1.re = 5;
    c1.print();
}