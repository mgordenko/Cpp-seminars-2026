#include <iostream>

void print_ascii(const std::string& s) {
    for (int i = 0; i < s.length(); ++i) {
        std::cout << s[i] << '-' << (int)s[i] << '\n';
    }
}
int main() {
    std::string s = "hello";
    print_ascii(s);
}