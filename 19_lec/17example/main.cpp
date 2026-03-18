#include <iostream>
#include <vector>
#include <utility>


double Divide(double a, double b) {
    if (b == 0.0) {
        throw std::runtime_error("Division by zero!");
    }
    return a / b;
}

int main() {
    double result = Divide(10, 0);
    return 0;
}