#include <iostream>

int main() {
    int n = 10;
    int array[n];
    std::cout << (&array[2] - &array[0]) << '\n';
    std::cout << (&array[2] - &array[1]) << '\n';
}
