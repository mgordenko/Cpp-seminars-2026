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

template<typename T>
void printMatrix(const T* const* matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << '\n';
    }
}
int main() {
    int n, m;
    int** matrix = readMatrixFromFile("input.txt", n, m);
    printMatrix(matrix, n, m);
    for (int i = 0; i < n; ++i) {
        delete[] matrix[i];
        matrix[i] = nullptr;
    }
    delete[] matrix;
    matrix = nullptr;
}