#include <iostream>

void swap_int(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int x = 5, y = 10;
    std::cout << x << ' ' << y << '\n';
    swap_int(&x, &y);
    std::cout << x << ' ' << y << '\n';
    return 0;
}