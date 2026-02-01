#include <iostream>

bool isAbove100(double x) { return x > 100; }
bool isInflationary(double x) { return x > 100 && x < 110; }

void printIf(double v1, double v2, double v3, bool (*predicate)(double)) {
    if (predicate(v1)) std::cout << v1 << '\n';
    if (predicate(v2)) std::cout << v2 << '\n';
    if (predicate(v3)) std::cout << v3 << '\n';
}

int main() {
    double x = 95.0, y = 105.0, z = 115.0;

    printIf(x, y, z, isAbove100);
    printIf(x, y, z, isInflationary);

    return 0;
}