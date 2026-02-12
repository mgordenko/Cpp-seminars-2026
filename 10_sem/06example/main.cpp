#include <iostream>
#include <fstream>

void delete_matrix(int**& p, int n) {
    for (int i = 0; i < n; ++i) {
        delete[] p[i];
        p[i] = nullptr;
    }
    delete[] p;
    p = nullptr;
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

void fillSpiral(int** matrix, int n) {
    int row_st = 0;
    int row_end = n - 1;
    int line_st = 0;
    int line_end = n - 1;
    int num = 1;
    while (num <= n * n) {
        for (int i = line_end; i >= line_st; --i) {
            matrix[i][row_st] = num++;
        }
        row_st++;
        for (int i = row_st; i <= row_end; ++i) {
            matrix[line_st][i] = num++;
        }
        line_st++;
        for (int i = line_st; i <= line_end; ++i) {
            matrix[i][row_end] = num++;
        }
        row_end--;
        for (int i = row_end; i >= row_st; --i) {
            matrix[line_end][i] = num++;
        }
        line_end--;
    }
}

int main() {
    int n = 5;
    int** matrix = new int*[n];
    for (int i = 0; i < n; ++i)
        matrix[i] = new int[n];
    fillSpiral(matrix, n);
    printMatrixToFile("output.txt", matrix, n, n);
    for (int i = 0; i < n; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
}