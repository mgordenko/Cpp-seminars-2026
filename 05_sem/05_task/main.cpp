#include <iostream>

int* get_static_counter() {
    static int count = 0;
    ++count;
    return &count;
}

int main() {
    int* p1 = get_static_counter();
    int* p2 = get_static_counter();
    std::cout << p1 << ' ' << *p1 << '\n';
    std::cout << p2 << ' ' << *p2 << '\n';
    return 0;
}