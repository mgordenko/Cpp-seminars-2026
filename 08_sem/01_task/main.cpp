#include "iostream"
#include <cctype>
#include <string_view>
std::string upperCase(const std::string& s) {
    std::string s1 = "";
    s1.reserve(s.length());
    for (int i = 0; i < s.length(); ++i) {
        s1 += s[i] + ('A' - 'a');
    }
    return s1;
}

std::string upperCase2(const std::string& s) {
    std::string s1 = "";
    s1.reserve(s.length());
    for (int i = 0; i < s.length(); ++i) {
        s1 += (char)std::toupper(s[i]);
    }
    return s1;
}

std::string upperCase3(std::string_view s) {
    std::string s1 = "";
    s1.reserve(s.length());
    for (int i = 0; i < s.length(); ++i) {
        s1 += (char)std::toupper(s[i]);
    }
    return s1;
}

int main() {
    std::string s = "hTY589Yllo";
    std::cout << upperCase(s) << '\n';
    std::cout << upperCase2(s) << '\n';
    std::cout << upperCase3("fqber7fqther") << '\n';
    return 0;
}