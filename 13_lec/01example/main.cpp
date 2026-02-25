#include <iostream>
#include <vector>

struct Complex {
    double re;
    double im;
    void print() { // self --> this
        std::cout << re << ' ' << im << '\n';
    }
};
int main() {
    Complex c1{10, 20};
    c1.print();
    Complex c2{14, 130};
    c2.print();
    std::vector<Complex> v;
    int n = 10;
    for (int i = 0; i < n; ++i) {
        v.push_back(Complex{1.0 ,2.0});
    }
    for (int i = 0; i < n; ++i) {
        v[i].print();
    }
}
