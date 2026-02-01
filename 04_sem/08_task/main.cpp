#include <iostream>

void printValue(int x) {
    std::cout << x << " (int)\n";
}

void printValue(double x) {
    std::cout << x << " (double)\n";
}

void printValue(bool x) {
    std::cout << std::boolalpha << x << " (bool)\n";
}

int main() {
    int i; double d; bool b;
    std::cin >> i >> d >> b;
    printValue(i);
    printValue(d);
    printValue(b);
    return 0;
}