#include <iostream>
#include <fstream>

int** readMatrixFromFile(const std::string& filename, int& rows, int& cols) {
    std::ifstream in("input.txt");
    in >> rows >> cols;
    int** arr = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        arr[i] = new int[cols];
    }
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            in >> arr[i][j];
        }
    }
    in.close();
    return arr;
}

bool isSymmetric(const int* const* matrix, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (matrix[i][j] != matrix[j][i])
                return false;
        }
    }
    return true;
}

int main() {
    int n, m;
    int** matrix = readMatrixFromFile("input.txt", n, m);
    std::cout << isSymmetric(matrix, n);
    for (int i = 0; i < n; ++i) {
        delete[] matrix[i];
        matrix[i] = nullptr;
    }
    delete[] matrix;
    matrix = nullptr;
}
