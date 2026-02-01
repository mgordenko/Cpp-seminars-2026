#include <iostream>

int main() {
    for (int num = 2000; num <= 3000; ++num) {
        int d1 = num / 1000;
        int d2 = (num / 100) % 10;
        int d3 = (num / 10) % 10;
        int d4 = num % 10;

        if (d1 != d2 && d1 != d3 && d1 != d4 &&
            d2 != d3 && d2 != d4 &&
            d3 != d4) {
            std::cout << num << '\n';
            }
    }
    return 0;
}