#include <iostream>

int main() {
    std::string s1 = "hello";
    std::string s2 = "hello";
    std::cout << std::boolalpha << (s1 == s2) << '\n';
    std::cout << std::boolalpha << ("abc" < "abd") << '\n';
    std::cout << (s1.compare(s2)) << '\n';
}