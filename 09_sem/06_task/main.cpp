#include <fstream>
#include <iostream>
#include <random>
void transpose(const int* const* src, int** &dest, int n, int m) {
    dest = new int *[m];
    for (int i =0; i < m; ++i) {
        dest[i] = new int[n];
        for (int j =0; j < n; ++j) {
            dest[i][j] = src[j][i];
        }
    }
}
void fillRandom(int** matrix, int rows, int cols, int minVal = 0, int maxVal = 99) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(minVal, maxVal);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = dis(gen);
        }
    }
}

void print(int** p, int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << p[i][j] << ' ';
        }
        std::cout << '\n';
    }
}

void delete_matrix(int**& p, int n) {
    for (int i = 0; i < n; ++i) {
        delete[] p[i];
        p[i] = nullptr;
    }
    delete[] p;
    p = nullptr;
}
int main() {
    int n = 3, m = 5;
    int** matrix = new int*[n];
    int** matrix2;

    for (int i = 0; i < n; ++i) {
        matrix[i] = new int[m];
    }
    fillRandom(matrix, n, m);
    print(matrix, n, m);

    transpose(matrix, matrix2, n, m);
    print(matrix2, m, n);
    delete_matrix(matrix, n);
    delete_matrix(matrix2, m);

    return 0;
}