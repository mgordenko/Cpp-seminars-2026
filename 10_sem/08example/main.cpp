#include <iostream>
#include <string>

/*
посчитать в строке количество гласных
 */

int main1() {
    std::string s = "hello world";
    std::string vowels = "aeiuo";
    int count = 0;
    for (int i = 0; i < s.size(); ++i) {
        for (int j = 0; j < vowels.size(); ++j) {
            if (s[i] == vowels[j]) {
                ++count;
                break;
            }
        }
    }
    std::cout << count;
}

int main() {
    std::string s = "hello world";
    std::string vowels = "aeiuo";
    int count = 0;
    for (int i = 0; i < s.size(); ++i) {
        // if (vowels.contains(s[i])) {
        //     ++count;
        // }
        if (vowels.find(s[i]) != std::string::npos) {
            ++count;
        }
    }
    std::cout << count;
}