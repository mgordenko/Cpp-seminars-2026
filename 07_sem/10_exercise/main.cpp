#include <iostream>

int* findMid(int arr[], int size) {
    return arr + size/2;
}

int main() {
    int numbers[] = {5, 10, 15, 20, 25};
    int* mid = findMid(numbers, 5);
    *mid = 100;
    std::cout << numbers[2];
    return 0;
}