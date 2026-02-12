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
void delete_matrix(int**& p, int n) {
    for (int i = 0; i < n; ++i) {
        delete[] p[i];
        p[i] = nullptr;
    }
    delete[] p;
    p = nullptr;
}
void transpose(const int* const* src, int**& dest, int n, int m) {
    dest = new int*[m];
    for (int i = 0; i < m; ++i) {
        dest[i] = new int[n];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            dest[j][i] = src[i][j];
        }
    }
}
void printMatrixToFile(const std::string& filename, const int* const* src, int rows, int cols) {
    std::ofstream out(filename);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            out << src[i][j] << ' ';
        }
        out << '\n';
    }
    out.close();
}
int main() {
    int n, m;
    int** orig = readMatrixFromFile("input.txt", n, m);
    int** transposed;
    transpose(orig, transposed, n, m);
    printMatrixToFile("output.txt", transposed, m, n);
    delete_matrix(orig, n);
    delete_matrix(transposed, n);
}