#include <iostream>
#include <string>
#include <random>

std::string generateRandomStr(int n) {
    std::string alphabet = "abcdefghi";
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(0, alphabet.size() - 1);

    std::string result;
    result.reserve(n);
    for (int i = 0; i < n; ++i) {
        result += alphabet[dist(gen)];
    }
    return result;
}

int main() {
    int n = 6;
    std::cout << generateRandomStr(6) << '\n';
}