#include <iostream>
#include <string>
#include <random>

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

int trace(const int* const* matrix, int n) {
    int sum = 0;
    for (int i = 0; i<n; ++i) {
        sum += matrix[i][i];
    }
    return sum;
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
    int n = 4;
    int** matrix = new int*[n];
    for (int i = 0; i < n; ++i) {
        matrix[i] = new int[n];
    }
    fillRandom(matrix, n, n);
    print(matrix, n, n);
    std::cout << trace(matrix, n);
    std::cout << matrix << '\n';
    delete_matrix(matrix, n);
    std::cout << matrix;
    return 0;
}