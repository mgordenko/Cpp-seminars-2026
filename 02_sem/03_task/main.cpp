#include <iostream>
#include <chrono>

int main() {
    const int N = 100000;
    volatile int x;
    volatile int div = 2;
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < N; ++i) {
        x = x / div;
        x = x + 1;
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto duration_div = std::chrono::duration<double, std::micro>(end - start);
    volatile int shift = 1;

    start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < N; ++i) {
        x = x >> shift;
        x = x + 1;
    }
    end = std::chrono::high_resolution_clock::now();
    auto duration_shift = std::chrono::duration<double, std::micro>(end - start);

    std::cout << duration_div.count() << '\n';
    std::cout << duration_shift.count() << '\n';

    return 0;
}