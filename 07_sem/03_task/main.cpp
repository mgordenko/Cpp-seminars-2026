#include <iostream>
#include "array_utils.h"

int main() {
    int new_size = 6;
    int old_zise = 5;
    int* arr = new int[5]{1, 2, 3, 4, 5};
    arr = resizeArray(arr, old_zise, new_size);
    for (int i = 0; i < new_size; ++i) {
        std::cout << arr[i] << ' ';
    }
    return 0;
}