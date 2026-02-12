#include <iostream>

int main() {
    int n = 4;
    int m = 5;
    int **arr = new int *[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = new int[m];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = i + j + 1;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << &arr[i][j] << ' ';
        }
        std::cout << '\n';
    }
    for (int i = 0; i < n; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
}
