#include <iostream>

int main() {
    int a[] = {5, 10, 15};
    int *p = a;
    int c = 0;
    std::cout << c << '\n';
    std::cout << c++ << '\n'; // 0, но сохранит 1
    std::cout << ++c << '\n';
    std::cout << *p++ << " "; // 5
    std::cout << *++p << " ";
    std::cout << ++*p;
    return 0;
}