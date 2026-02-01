#include <iostream>

template<typename T>
bool isEven(T n) {
    return n % 2 == 0;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << std::boolalpha << isEven(n) << '\n';
    return 0;
}