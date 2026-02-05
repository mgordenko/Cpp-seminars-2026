#include "array_utils.h"

int* createAndInit(int size, int value) {
    int* array = new int[size];
    for (int i = 0; i < size; ++i) {
        array[i] = value;
    }
    return array;
}