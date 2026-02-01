#include <iostream>

void calculate(int a, int b, int& sum, int& product) {
    sum = a + b;
    product = a * b;
}

int main() {
    int x = 7, y = 3;
    int sum, p;

    calculate(x, y, sum, p);

    std::cout << x << " + " << y << " = " << sum << '\n';
    std::cout << x << " * " << y << " = " << p << '\n';

    return 0;
}