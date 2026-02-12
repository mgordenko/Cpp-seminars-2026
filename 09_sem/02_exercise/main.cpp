#include <iostream>

int main() {
    int a[3][2] = {9, 8, 7, 6, 5, 4};
    // a --> int**
    // 9 8
    // 7 6
    // 5 4
    int *p = &a[0][0];
    std::cout << *(p + 4) << " ";
    std::cout << a[2][0] << " ";
    std::cout << *(a[1] + 1) << " ";
    std::cout << (*(a + 1))[1];
    return 0;
}