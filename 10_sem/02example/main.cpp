#include <iostream>
#include <fstream>

bool isPalindrome(std::string_view sv) {
    int l = 0;
    int r = sv.size() - 1;
    while (l < r) {
        if (sv[l] != sv[r])
            return false;
        ++l; --r;
    }
    return true;
}

int main() {
    std::cout << isPalindrome("abccba");
}
