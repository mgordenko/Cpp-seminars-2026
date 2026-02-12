#include "matrix_utils.h"

int main() {
    int n = 4, m = 5;
    int** matrix = new int*[n];
    for (int i = 0; i < n; ++i) {
        matrix[i] = new int[m];
    }
    fillRandom(matrix, n, m);
    print(matrix, n, m);
    for (int i = 0; i < n; ++i) {
        delete[] matrix[i];
        matrix[i] = nullptr;
    }
    delete[] matrix;
    matrix = nullptr;
    return 0;
}