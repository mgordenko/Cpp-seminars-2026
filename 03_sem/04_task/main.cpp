#include <iostream>

int main() {
    int N;
    std::cin >> N;

    int hundreds = (N / 100) % 10;
    std::cout << hundreds << '\n';

    return 0;
}