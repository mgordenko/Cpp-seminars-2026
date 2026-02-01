#include <iostream>

int main() {
    char c;
    std::cin >> c;

    if (c >= 'A' && c <= 'Z') {
        c = (char)(c + ('a' - 'A'));
    }

    std::cout << c << '\n';
    return 0;
}