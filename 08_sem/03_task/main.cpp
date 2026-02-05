#include <iostream>
#include <string>
#include <sstream>

std::string removeAll1(std::string s, const std::string& substr) {
    if (substr.empty()) {
        return s;
    }
    size_t pos = 0;
    while ((pos = s.find(substr, pos)) != std::string::npos) {
        s.erase(pos, substr.length());
    }
    return s;
}

int main() {
    std::cout << removeAll1("dygABfhABjgrABg", "AB");
    return 0;
}