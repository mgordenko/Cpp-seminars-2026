#include <iostream>

int main() {
    int a = 1, b = 2, c = 3;
    std::cout << (&c - &a) << '\n'; // ub
    return 0;
}