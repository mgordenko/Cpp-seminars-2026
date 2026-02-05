#include <iostream>
#include <string_view>

void printString(std::string_view sv) {
    std::cout << sv.size() << '\n';
    std::cout << sv<< '\n';
}

int main() {
    printString( "hello");
}