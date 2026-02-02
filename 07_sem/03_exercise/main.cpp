#include <iostream>

int main() {
    int x = 1, y = 2, z = 3;
    int* p[] = {&x, &y, &z};
    int **q = p + 1;
    std::cout << **q << " " << *(*(q + 1)) << " " << *p[2];
    return 0;
}