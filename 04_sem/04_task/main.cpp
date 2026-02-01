#include <iostream>

int countDigits(int n) {
    if (n < 0) n = -n;
    if (n < 10) return 1;
    return 1 + countDigits(n / 10);
}

int main() {
    int n;
    std::cin >> n;
    std::cout << countDigits(n) << '\n';
    return 0;
}