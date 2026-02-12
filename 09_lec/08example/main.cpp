#include <iostream>
#include <string>
#include <sstream>

int const n = 4;
int const m = 4;
void sortDiag(int matrix[n][m], int n, int m) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (matrix[j][j] < matrix[j + 1][j + 1]) {
                for (int k = 0; k < m; ++k) {
                    std::swap(matrix[j][k], matrix[j + 1][k]);
                }
            }
        }
    }
}
void print(int p[n][m], int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << p[i][j] << ' ';
        }
        std::cout << '\n';
    }
}
int main() {
    int matrix[n][m] = {
        {9, 2, 3, 4},
        {5, 6, 7, 8},
        {1, 0, 2, 3},
        {7, 8, 9, 5}
    };
    sortDiag(matrix, n, m);
    print(matrix, n, m);
}