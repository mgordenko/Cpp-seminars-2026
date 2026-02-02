#include <iostream>

int main() {
    int size = 3;
    int *arr = new int[size]{30, 40, 50};
    int *r = arr;
    std::cout << *r << " ";
    std::cout << *(r + 1) << " ";
    std::cout << *r + 2;
    return 0;
}