#include <iostream>
#include <string>

// 1. В строке посчитать кол-во согласных
int main1() {
    std::string s = "hello, world";
    std::string vowels = "aeiou";
    int count_vowels = 0;
    for (int i = 0; i < s.size(); ++i) {
        for (int j = 0; j < vowels.size(); ++j) {
            if (vowels[j] == s[i])
                ++count_vowels;
        }
    }
    int count = 0;
    for (int i = 0; i < s.size(); ++i) {
        if ((s[i] >= 'a' && s[i] <= 'z') || ((s[i] >= 'A' && s[i] <= 'Z'))) {
            ++count;
        }
    }
    std::cout << count - count_vowels;
}

int main() {
    std::string s = "hello, world";
    std::string vowels = "aeiou";
    int count = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (vowels.find(s[i]) == std::string::npos
            && ((s[i] >= 'a' && s[i] <= 'z') || ((s[i] >= 'A' && s[i] <= 'Z')))) {
            ++count;
        }
    }
    std::cout << count;
}