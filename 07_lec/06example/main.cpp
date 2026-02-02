
#include <iostream>
#include <random>

// Случайным образом генерируется 100 чисел. Вывести их в порядке возрастания.

int main() {
    int n = 100;
    int* array = new int[n];
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(1, 100);
    for (int i = 0; i < n; ++i) {
        array[i] = dist(gen);
    }
    for (int i = 0; i < n; ++i) {
        std::cout << array[i] << ' ';
    }
    std::cout << '\n';
    for (int i = 0; i < n; ++i) {
        int max_idx = 0;  // индекс минимального
        for (int j = 1; j < n - i; ++j) {
            if (array[j] > array[max_idx])
                max_idx = j;
        }
        int temp = array[max_idx];
        array[max_idx] = array[n - i - 1];
        array[n - i - 1] = temp;
    }
    for (int i = 0; i < n; ++i) {
        std::cout << array[i] << ' ';
    }
    delete[] array;
    array = nullptr;
}