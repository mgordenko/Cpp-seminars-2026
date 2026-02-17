#include <iostream>
#include <random>
void fillFormula(int** matrix, int rows, int cols, int minVal = 0, int maxVal = 99) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = 2 * i + j;
        }
    }
}
void fillRandom(int** matrix, int rows, int cols, int minVal = 0, int maxVal = 99) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(minVal, maxVal);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = dist(gen);
        }
    }
}
void printMatrix(int** matrix, int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << '\n';
    }
}
int main() {
    int n = 3, m = 4;
    int** matrix = new int*[n];
    for (int i = 0; i < n; ++i) {
        matrix[i] = new int[m];
    }
    fillRandom(matrix, n, m);
    printMatrix(matrix, n, m);
    for (int i = 0; i < n; ++i) {
        delete[] matrix[i];
        matrix[i] = nullptr;
    }
    delete[] matrix;
    matrix = nullptr;
    return 0;
}