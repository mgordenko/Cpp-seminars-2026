#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;

    int quotient = a / b;
    int remainder = a % b;
    bool check = (a == quotient * b + remainder);

    std::cout << "a / b = " << quotient << '\n';
    std::cout << "a % b = " << remainder << '\n';
    std::cout << (check ? "true" : "false") << '\n';

    return 0;
}