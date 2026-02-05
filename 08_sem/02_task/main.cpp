#include <iostream>
#include <sstream>

size_t countWords(const std::string& text) {
    std::istringstream iss(text);
    std::string word;
    size_t count = 0;
    while (std::getline(iss, word, ' ')) {
        std::cout << word << '\n';
        ++count;
    }
    return count;
}
int main() {
    std::cout << countWords("hello hi hi,435,4534");
}