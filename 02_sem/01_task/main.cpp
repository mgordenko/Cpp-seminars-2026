#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int reversed = ((n & 1) << 3) |
                   ((n & 2) << 1) |
                   ((n & 4) >> 1) |
                   ((n & 8) >> 3);

    std::cout << n << '\n';
    std::cout << reversed << '\n';

    return 0;
}