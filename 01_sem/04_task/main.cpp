#include <iostream>
#include <iomanip>

int main() {
    double x = 10.2427;
    std::cout << std::fixed << std::setprecision(3) << x << '\n';
    return 0;
}