#include <iostream>
#include <string>

// 4. В строке заменить все вхождения построки s1 на строку s2

int main() {
    std::string s1 = "abc gferji abcabc fuew";
    std::string s2 = "HH";
    int count = 0;

    while (s1.find("abc") != std::string::npos) {
        int index = s1.find("abc");
        s1.replace(index, 3, s2);
    }

    std::cout << s1;
}