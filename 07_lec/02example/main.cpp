#include <iostream>

int main() {
    int array1[3] = {1, 2, 3};
    int array2[3] = {1, 2, 3};
    int* array3 = new int[]{1, 2, 3};
    std::cout << std::boolalpha << (array1 == array2) << '\n';
    std::cout << std::boolalpha << (array1 == array1) << '\n';
    std::cout << std::boolalpha << (&array1[0] < &array1[1]) << '\n';
    std::cout << std::boolalpha << (&array2[0] < &array1[1]) << '\n';
    std::cout << sizeof(array1) << ' ' << sizeof(array3);
    delete[] array3;
}