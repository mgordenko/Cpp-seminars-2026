#include <iostream>
#include "array_utils.h"

int main() {
    int n = 3;
    int arr[] = {1, 2, 3};
    const int* const_arr = arr;
    int* copy = copyArray(const_arr, n);
    for (int i = 0; i < n; ++i) {
        std::cout << copy[i] << ' ';
    }
    delete[] copy;
}