#include <iostream>

int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    std::cout << *(matrix[1] + 1) << " ";
    std::cout << *(*matrix + 4) << " ";
    std::cout << (*(matrix + 1))[2];
    return 0;
}