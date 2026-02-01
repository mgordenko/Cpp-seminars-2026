#include <iostream>

int main() {
    int count = 0;
    for (int n = 100; n <= 999; ++n) {
        if (n % 15 == 0 && n % 30 != 0) {
            std::cout << n << '\n';
            ++count;
        }
    }
    std::cout << count << '\n';
    return 0;
}