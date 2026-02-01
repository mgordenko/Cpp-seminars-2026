#include <iostream>

template<typename T>
T* min_ptr(T* a, T* b) {
    return (*a < *b) ? a : b;
}

int main() {
    int x = -5, y = 3;
    int* p = min_ptr(&x, &y);
    std::cout << *p << '\n';
    return 0;
}