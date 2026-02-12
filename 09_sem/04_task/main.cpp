#include <iostream>
#include <string>
#include <random>

template<typename T>
T maxElement(const T* const* matrix, int rows, int cols)
{
    T max_elem = matrix[0][0];
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            if (matrix[i][j] > max_elem)
            {
                max_elem = matrix[i][j];
            }
        }
    }
    return max_elem;
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
    int n = 4;
    int** matrix = new int*[n];
    for (int i = 0; i < n; ++i) {
        matrix[i] = new int[n];
    }
    fillRandom(matrix, n, n);
    print(matrix, n, n);
    std::cout << maxElement(matrix, n, n);
    delete_matrix(matrix, n);
    return 0;
}