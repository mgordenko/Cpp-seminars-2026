#include <iostream>
#include <string>
/*
посчитать кол-во гласных в строке
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
        if (vowels.find(s[i]) < vowels.size()) {
            ++count;
        }
    }
    std::cout << count;
}