#include <fstream>
#include <iostream>
#include <string>

void processNumbers(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        return;
    }
    std::string line;
    while (std::getline(file, line)) {
        try {
            int num = std::stoi(line);
            std::cout << num * num << std::endl;
        } catch (const std::invalid_argument&) {
            std::cout << "-\n";
            continue;
        } catch (const std::out_of_range&) {
            std::cout << "-\n";
            continue;
        }
    }
    file.close();
}

int main() {
    processNumbers("input.txt");
    return 0;
}