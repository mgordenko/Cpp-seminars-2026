#include <iostream>
#include <random>

int* generate(int n) {
    int* array = new int[n];
    for (int i = 0; i < n; ++i)
        array[i] = i * i;
    return array;
}
void print_array(int* array, int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << array[i] << ' ';
    }
    std::cout << '\n';
}

// написать функцию которая удаляет эл-т по индексу О(n)
void remove_element(int* arr, int &n, int index) {
    for (int i = index + 1; i < n; ++i) {
        arr[i - 1] = arr[i];
    }
    n -= 1;
}
void append(int*& arr, int &n, int el) { // O(n)
    int* arr_new = new int[n + 1];
    for (int i = 0; i < n; ++i) {
        arr_new[i] = arr[i];
    }
    arr_new[n] = el;
    n += 1;
    delete[] arr;
    arr = arr_new;
}
int main() {
    int n = 10;
    int* array = generate(n);
    print_array(array, n);
    std::cout << array << '\n';
    //remove_element(array, n, 0);
    append(array, n, 10);
    std::cout << array << '\n';
    append(array, n, 20);
    std::cout << array << '\n';
    print_array(array, n);
    delete[] array;
    array = nullptr;
}