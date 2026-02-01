#include <iostream>

void adjust_prices(double* p1, double* p2, double inflation_rate) {
    *p1 *= (1.0 + inflation_rate);
    *p2 *= (1.0 + inflation_rate);
}

int main() {
    double x = 100.0, y = 200.0;
    std::cout << x << ' ' << y << '\n';
    adjust_prices(&x, &y, 0.05);
    std::cout << x << ' ' << y << '\n';
    return 0;
}