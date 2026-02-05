#include <iostream>
#include <random>

void printString(const std::string& s) {
    std::cout << s << '\n';
}

void changeString(std::string_view s) {
    std::cout << s << '\n';
    s = "qwerty";
    std::cout << s << '\n';
}

int main() {
    std::string s = "hello";
    printString(s);
    printString("hello"); // copy
    changeString("hello");
    printString(s);
}