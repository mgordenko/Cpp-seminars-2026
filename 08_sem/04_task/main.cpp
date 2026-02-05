#include <iostream>
#include <string>
#include <sstream>

bool isPalindrome1(std::string_view text) {
    size_t left = 0, right = text.length() - 1;
    while (left <= right) {
        if (text[left] != text[right]) {
            return false;
        }
        ++left;
        --right;
    }
    return true;
}

bool isPalindrome2(std::string_view sv) {
    for (size_t i = 0; i < (sv.length() / 2); ++i) {
        if (sv[i] != sv[sv.length() - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::cout << std::boolalpha << isPalindrome1("abcba") << '\n';
    std::cout << std::boolalpha << isPalindrome2("abbb");
    return 0;
}