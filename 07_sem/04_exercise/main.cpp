#include <iostream>

int* createArray() {
    int arr[3] = {1, 2, 3};
    return arr;
}

int main() {
    int *result = createArray();
    std::cout << result[0];
}