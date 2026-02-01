#include <iostream>

int main() {
    int value = 0x61626364;
    unsigned char* ptr = (unsigned char*)(&value);

    std::cout << (int)ptr[0] << '\n';
    std::cout << (int)ptr[1] << '\n';
    std::cout << (int)ptr[2] << '\n';
    std::cout << (int)ptr[3] << '\n';

    return 0;
}