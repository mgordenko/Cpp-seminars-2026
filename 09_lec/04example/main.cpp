#include <iostream>
#include <string>
#include <random>

// 1
// 2 2
// 3 3 3
// 4 4 4 4
int main() {
    int n = 5;
    int** arr = new int*[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = new int[i + 1];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i + 1; ++j) {
            arr[i][j] = i + 1;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i + 1; ++j) {
            std::cout << arr[i][j] << ' ';
        }
        std::cout << '\n';
    }
    for (int i = 0; i < n; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
    arr = nullptr;
}