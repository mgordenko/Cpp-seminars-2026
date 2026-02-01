#include <iostream>
#include "sort3.h"

int main() {
    int x = 7, y = 2, z = 5;
    std::cout << x << ' ' << y << ' ' << z << '\n';
    sortThree(x, y, z);
    std::cout << x << ' ' << y << ' ' << z << '\n';
    return 0;
}