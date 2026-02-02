#include <iostream>

int main() {
    float arr[] = {1.5, 2.5, 3.5, 4.5};
    float *ptr = arr + 3;
    std::cout << ptr[-2] << " "; // arr + 3 - 2 --> arr[1]
    std::cout << *(ptr - 1) << " "; // arr + 3 - 1 --> arr[2]
    std::cout << (ptr - arr); // arr + 3 - arr = 3
    return 0;
}