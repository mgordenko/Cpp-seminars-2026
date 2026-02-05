#include <iostream>

int main() {
    std::string input = "Hello, World!";
    std::cout << input.size() << '\n';
    std::cout << std::boolalpha << input.empty() << '\n';
    std::cout << input[0] << '\n';
    std::cout << input.substr(1, 4) << '\n';
    std::cout << input.find("ll") << '\n';
    std::cout << (input.find(".") == std::string::npos) << '\n';
    std::cout << input.replace(0, 6, "Hi") << '\n';
    std::cout << input[90] << '\n';
    std::cout << input.at(5) << '\n';
}
