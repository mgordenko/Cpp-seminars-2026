#include "array_utils.h"

int* copyArray(const int* arr, int size) {
    int* copy = new int[size];
    for (int i = 0; i < size; ++i) {
        copy[i] = arr[i];
    }
    return copy;
}