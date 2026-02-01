#include <iostream>

#include "calculator.h"
#include "math_utils.h"  // Подключаем наш заголовок

int main() {
    std::cout << "10 / 2 = " << divide(10, 2) << '\n';
    std::cout << "add: " << add(10, 15) << '\n';
    std::cout << "substract: " << substract(30, 3) << '\n';
    std::cout << "multiply: " << multiply(40, 2) << '\n';
    std::cout << "power: " << power(10, 4) << '\n';
    return 0;
}