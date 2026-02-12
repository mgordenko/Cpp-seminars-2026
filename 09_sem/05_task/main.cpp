#include <iostream>
#include <fstream>

int main() {
    std::ifstream source("input.txt");
    std::ofstream target("output.txt");
    std::string line;
    while (std::getline(source, line)) {
        target << line << '\n';
    }
    source.close();
    target.close();
}