#include <iostream>


int main() {
    int n = 5;
    int arr[n]; // стандарт запретил!!!
    for (int i = 0; i < n; ++i) {
        arr[i] = i + 2;
    }
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << ' ';
    }
}