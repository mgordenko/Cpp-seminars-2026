#include <iostream>
#include <string>

int main() {
    int const n = 3;
    const int m = 4;
    int matrix[n][m];
    int num = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            matrix[i][j] = num++;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << '\n';
    }
    std::cout << '\n';
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << *(*matrix + i * m + j) << ' ';
        }
        std::cout << '\n';
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << *(*(matrix + i) + j) << ' ';
        }
        std::cout << '\n';
    }
    std::cout << '\n';
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << &matrix[i][j] << ' ';
        }
        std::cout << '\n';
    }
    std::cout << '\n';
    std::cout << matrix << '\n';
    std::cout << *matrix << '\n';
    std::cout << **matrix << '\n';
}
