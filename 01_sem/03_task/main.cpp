#include <iostream>
#include <cstdint>

int main() {
    std::int8_t a = -10;
    std::uint32_t b = 1000000;
    std::int64_t sum = a + b;

    std::cout << "a = " << int(a) << '\n';
    std::cout << "b = " << b << '\n';
    std::cout << "sum = " << sum << '\n';

    return 0;
}