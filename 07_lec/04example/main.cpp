#include <iostream>

int main() {
    int n = 10;
    int* array = new int[n];
    for (int i = 0; i < n; ++i) {
        array[i] = i + 1;
    }
    for (int i = 0; i < n; ++i) {
        std::cout << array[i] << ' ';
    }
    std::cout << array << ' ' << *array << '\n';
    delete[] array;
    array = nullptr;
    for (int i = 1; i < n; ++i) {
        std::cout << array[i] << ' ';
    }
}