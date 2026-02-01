#include <iostream>
#include <cmath>
#include <numbers>

int main() {
    double x = -4.7;
    double y = 3.0;

    std::cout << std::abs(x) << '\n';
    std::cout << std::pow(x, y) << '\n';
    std::cout << std::sqrt(std::abs(x)) << '\n';
    std::cout << std::numbers::pi << '\n';
    std::cout << std::numbers::e << '\n';

    return 0;
}