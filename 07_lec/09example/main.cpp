#include <iostream>
#include <random>

int* generate(int n) {
    int* array = new int[n];
    for (int i = 0; i < n; ++i)
        array[i] = i * i;
    return array;
}
void print_array1(int* array, int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << array[i] << ' ';
        array[i] = 100;
    }
    std::cout << '\n';
}
void print_array2(int*& array, int n) {
    for (int i = 0; i < n; ++i)
        std::cout << array[i] << ' ';
    delete[] array;
    array = new int[n];
    for (int i = 0; i < n; ++i)
        array[i] = 100;
    std::cout << '\n';
}
int main() {
    int n = 10;
    int* array = generate(n);
    print_array1(array, n);
    print_array1(array, n);
    delete[] array;
    array = nullptr;
    array = generate(n);
    print_array2(array, n);
    print_array2(array, n);
    delete[] array;
    array = nullptr;
}