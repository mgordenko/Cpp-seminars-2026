#include <iostream>
#include <iomanip>
#include <numbers>
#include <cmath>

int main() {
    const double pi = std::numbers::pi;
    std::cout << std::setw(10) << "x"
              << std::setw(15) << "f(x)" << '\n';
    std::cout << std::string(25, '-') << '\n';

    for (double x = -0.5; x <= 1.5; x += 0.1) {
        double fx;
        if (x <= 0.5) {
            fx = std::sin(pi / 2.0);
        } else {
            fx = std::sin((x - 1.0) * pi / 2.0);
        }
        std::cout << std::fixed << std::setprecision(3)
                  << std::setw(10) << x
                  << std::setw(15) << fx << '\n';
    }

    return 0;
}