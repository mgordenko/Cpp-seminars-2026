#include <iostream>

int sumDigits(int n) {
    if (n == 0) return 0;
    return (n % 10) + sumDigits(n / 10);
}

int main() {
    int n;
    std::cin >> n;
    std::cout << sumDigits(n) << '\n';
    return 0;
}