#include <iostream>
#include <string>

//  Перевести строку в верхний регистр

int main() {
    std::string s = "hello, world!";
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = char(s[i] - ('a' - 'A'));
        }
    }
    std::cout << s;
}