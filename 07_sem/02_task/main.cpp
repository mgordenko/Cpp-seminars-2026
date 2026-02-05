#include <iostream>
#include "include/array_utils.h"

int main() {
    int n = 5;
    int* arr = new int[] {1, 2, 3, 4, 5};
    int* copy = copyArray(arr, n);
    for (int i = 0; i < n; ++i) {
        std::cout << copy[i] << '\n';
    }
    delete[] arr;
    arr = nullptr;
    delete[] copy;
    copy = nullptr;
}