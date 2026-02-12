#include <iostream>
#include <string>

int main() {
    int const n = 5;
    const int m = 4;
    int b[n][m] {21, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << &b[i][j] << ' ';
        }
        std::cout << '\n';
    }
    std::cout << '\n';
    std::cout << *b << '\n';
    std::cout << **b << '\n';
    // b[i][j] = *(*(b + i) + j)
    // b[i][j] = b + i * m + j
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << *(*(b + i) + j) << ' ';
        }
        std::cout << '\n';
    }
    std::cout << '\n';
}
