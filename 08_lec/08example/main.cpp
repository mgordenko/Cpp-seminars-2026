#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string s, word;
    // 8 9 7 89 78 89 800
    int sum = 0;
    std::getline(std::cin, s); // 8 9 7 89 78 89 800
    std::istringstream iss(s);
    while (iss >> word) {
        sum += std::stoi(word);
    }
    std::cout << sum << '\n';
}