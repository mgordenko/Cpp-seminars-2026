#include <iostream>

int main() {
    int array1[3] = {1, 2, 3};
    int array2[3] = {1, 2, 3};
    std::cout << std::boolalpha << (array1 == array2) << '\n';
    std::cout << std::boolalpha << (array1 == array1) << '\n';
}