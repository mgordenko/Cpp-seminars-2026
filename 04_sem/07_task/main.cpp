#include <iostream>

int max(int a, int b) {
    return (a > b) ? a : b;
}

double max(double a, double b) {
    return (a > b) ? a : b;
}

int main() {
    int ia, ib;
    double da, db;
    std::cin >> ia >> ib >> da >> db;
    std::cout << max(ia, ib) << '\n';
    std::cout << max(da, db) << '\n';
    return 0;
}