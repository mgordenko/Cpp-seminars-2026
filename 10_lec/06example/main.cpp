#include <iostream>

int** read_matrix(int n) {
    int** arr = new int*[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = new int[n];
        for (int j = 0; j < n; ++j) {
            std::cin >> arr[i][j];
        }
    }
    return arr;
}
int find_sum(int**& matrix, int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += matrix[i][n - i - 1];
    }
    return sum;
}
int main() {
    int n;
    std::cin >> n;
    int** matrix = read_matrix(n);
    int sum = find_sum(matrix, n);
    std::cout << sum;
    for (int i = 0; i < n; ++i)
        delete[] matrix[i];
    delete[] matrix;
}