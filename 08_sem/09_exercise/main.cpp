#include <iostream>

#include <iostream>

int* getElement(int arr[], int index) {
    return &arr[index];
}

int main() {
    int values[] = {15, 25, 35, 45};
    int* ptr = getElement(values, 2);
    *ptr = 99;
    std::cout << values[2];
    return 0;
}