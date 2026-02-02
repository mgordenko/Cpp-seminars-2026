#include <iostream>

int main() {
    int *ptr = new int(5);
    int *arr = new int[5];
    for(int i = 0; i < 5; i++) {
        arr[i] = *ptr + i; // 5 6 7 8 9
    }
    delete ptr;
    std::cout << arr[3];
    delete[] arr;
    return 0;
}