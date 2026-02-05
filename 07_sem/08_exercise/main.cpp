#include <iostream>

int process(int* arr) {
    return *(arr + 2) + arr[1];
}

int main() {
    int data[] = {10, 20, 30, 40};
    int result = process(data);
    std::cout << result;
    return 0;
}