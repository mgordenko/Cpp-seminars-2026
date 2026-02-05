
#include <iostream>
#include <string>

int main() {
    std::string a = "76";
    std::string b = "10";
    int a_i = std::stoi(a);
    int b_i = std::stoi(b);
    int c = 78;
    std::string c_i = std::to_string(c);
    std::cout << c_i << '\n';
    std::cout << (a_i + b_i) << '\n';
}