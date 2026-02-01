#include <iostream>

int power(int base, int exp) {
    if (exp == 0) return 1;
    return base * power(base, exp - 1);
}

int main() {
    int base, exp;
    std::cin >> base >> exp;
    std::cout << power(base, exp) << '\n';
    return 0;
}