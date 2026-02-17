#include <iostream>
#include <string>

// 3. Из строки удалить все запятые

int main() {
    std::string s = "he, llo, wor,,ld";
    std::string vowels = "aeiou";
    int count = 0;

    while (s.find(",", 0) != std::string::npos) {
        int index = s.find(",",0);
        s.erase(index, 1);
    }

    std::cout << s;
}