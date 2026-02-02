#include <iostream>

int main() {
    int n = 10;
    int* array = new int[n];
    std::cout << "array = " << array << '\n';
    for (int i = 0; i < n; ++i) {
        std::cout << array[i] << ' ' << &array[i] << '\n';
    }
    delete[] array;
    array = nullptr;
    std::cout << "array = " << array << '\n';
    for (int i = 0; i < n; ++i) {
        std::cout << array[i] << ' ' << &array[i] << '\n';
    }
}