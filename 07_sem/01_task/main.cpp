#include "array_utils.h"
#include "iostream"

int main() {
    int n = 10, value = 11;
    int* array = createAndInit(n, value);
    for (int i = 0; i < n; ++i) {
        std::cout << array[i] << ' ';
    }
    return 0;
}