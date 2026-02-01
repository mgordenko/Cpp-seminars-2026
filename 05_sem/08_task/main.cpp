#include <iostream>

bool ascending(double a, double b) { return a < b; }
bool descending(double a, double b) { return a > b; }

void sort_three(double* x, double* y, double* z, bool (*compare)(double, double)) {
    if (compare(*y, *x)) { double t = *x; *x = *y; *y = t; }
    if (compare(*z, *x)) { double t = *x; *x = *z; *z = t; }
    if (compare(*z, *y)) { double t = *y; *y = *z; *z = t; }
}

int main() {
    double a = 5.2, b = 3.8, c = 7.1;

    sort_three(&a, &b, &c, ascending);
    std::cout << a << ' ' << b << ' ' << c << '\n';

    sort_three(&a, &b, &c, descending);
    std::cout << a << ' ' << b << ' ' << c << '\n';

    return 0;
}