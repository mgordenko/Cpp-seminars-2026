#include <iostream>

template<typename T>
T square(T x) {
    return x * x;
}

int main() {
    int x;
    std::cin >> x;
    std::cout << square(x) << '\n';
    return 0;
}