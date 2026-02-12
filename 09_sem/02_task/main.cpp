#include <iostream>
#include <fstream>

int** readMatrixFromFile(const std::string& filename, int& rows, int& cols) {
    std::ifstream in("matrix.txt");
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

int main() {
    int rows, cols;
    int** arr = readMatrixFromFile("matrix.txt", rows, cols);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << '\n';
    }
    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
    arr = nullptr;

    return 0;
}