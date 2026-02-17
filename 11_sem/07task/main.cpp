#include <iostream>
#include <vector>
#include <fstream>

void printMatrix(const std::vector<std::vector<int>>& matrix) {
    int n = matrix.size(), m = matrix[0].size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << '\n';
    }
}
std::vector<std::vector<int>> readMatrix() {
    std::ifstream in("../../11_sem/07task/input.txt");
    int n, m;
    in >> n >> m;
    std::vector<std::vector<int> > matrix(n, std::vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            in >> matrix[i][j];
        }
    }
    std::cout << 1;
    return matrix;
}
std::vector<std::vector<int>> transpose(const std::vector<std::vector<int>>& matrix) {
    int n = matrix.size(), m = matrix[0].size();
    std::vector<std::vector<int> > transposed(m, std::vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            transposed[j][i] = matrix[i][j];
        }
    }
    return transposed;
}
int main() {
    std::vector<std::vector<int> > matrix = readMatrix();
    printMatrix(matrix);
    std::vector<std::vector<int> > transposed = transpose(matrix);
    printMatrix(transposed);
}