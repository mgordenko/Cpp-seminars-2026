#include "array_utils.h"
#include "iostream"

int* createAndInit(int size, int value) {
    int* array = new int[size];
    for (int i = 0; i < size; ++i) {
        array[i] = value;
    }
    return array;
}

int main() {
    int n = 10, value = 11;
    int* array = createAndInit(n, value);
    for (int i = 0; i < n; ++i) {
        std::cout << array[i] << ' ';
    }
    delete[] array;
    array = nullptr;
    return 0;
}