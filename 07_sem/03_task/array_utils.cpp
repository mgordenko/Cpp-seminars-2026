//
// Created by Mariia Gordenko on 02.02.2026.
//

#include "array_utils.h"

int* resizeArray(int* arr, int oldSize, int newSize) {
    int* new_arr = new int[newSize];

    for (int i = 0; i < newSize; ++i) {
        new_arr[i] = (i < oldSize) ? arr[i] : 0;
    }

    delete[] arr;

    return new_arr;
}