#include <iostream>

int main() {
    const int n = 10;
    //std::cin >> n;
    int array[n];
    for (int i = 0; i < n; ++i) {
        array[i] = i + 1;
    }
    for (int i = 0; i < n; ++i) {
        std::cout << i << ' ' << array[i] << " - " << *(array + i) << ' ' << (array + i) << ' ' << &array[i] << '\n';
    }
    std::cout << '\n';
    for (int i = 0; i < n; ++i) {
        std::cout << i << ' ' << array[i] << " - " << i[array] << '\n';
    }
    // *(array + i) эквиваленты *(i + array)
    // array[i] эквиваленты i[array] --> *(array + i)

    std::cout << '\n';
    std::cout << array << ' ' << *array << '\n';
}
