#include <iostream>
#include <vector>

int main() {
    int n = 5, m = 8;
    std::vector<std::vector<int> > matr(n, std::vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            matr[i][j] = i + j;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << matr[i][j] << ' ';
        }
        std::cout << '\n';
    }
    std::cout << '\n';
    std::vector<std::vector<int> > matr2 = matr;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            matr2[i][j] += 10;
            std::cout << matr2[i][j] << ' ';
        }
        std::cout << '\n';
    }
    std::cout << '\n';
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << matr[i][j] << ' ';
        }
        std::cout << '\n';
    }
    std::cout << '\n';
}