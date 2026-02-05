#include <iostream>

int main() {
    int a[] = {5, 10, 15};
    int *p = a;
    std::cout << *p++ << " ";
    std::cout << *++p << " ";
    std::cout << ++*p;
    return 0;
}