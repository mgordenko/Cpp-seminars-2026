#include <iostream>

template<typename T>
void increase_by_10_percent(T* price) {
    *price *= 1.1;
}

int main() {
    double p = 100.0;
    std::cout << p << '\n';
    increase_by_10_percent(&p);
    std::cout << p << '\n';
    return 0;
}