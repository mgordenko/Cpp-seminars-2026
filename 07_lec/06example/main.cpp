
#include <iostream>
#include <random>

// Случайным образом генерируется 100 чисел. Вывести их в порядке возрастания.

void print(int* array, int n) { // void print(int array[], int n)
    for (int i = 0; i < n; ++i) {
        std::cout << array[i] << ' ';
    }
}
int* generate(int st, int stop, int n) {
    int* array = new int[n];
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(st, stop);
    for (int i = 0; i < n; ++i) {
        array[i] = dist(gen);
    }
    return array;
}
int main() {
    int n = 10;
    int* array = generate(1, 100, n);
    print(array, n);
    std::cout << '\n';
    for (int i = 0; i < n; ++i) {
        int max_ind = 0;
        for (int j = 0; j < n - i; ++j) {
            if (array[j] > array[max_ind]) {
                max_ind = j;
            }
        }
        int temp = array[max_ind];
        array[max_ind] = array[n - i - 1];
        array[n - i - 1] = temp;
    }
    print(array, n);
    delete[] array;
}