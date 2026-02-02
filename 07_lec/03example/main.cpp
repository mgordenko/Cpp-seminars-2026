#include <iostream>

int main() {
    int array[3] = {1, 2, 3};
    std::cout << (&array[2] - &array[0]) << '\n';
    std::cout << (&array[2] - &array[1]) << '\n';
}