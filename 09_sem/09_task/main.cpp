#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

void printCSV(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        return;
    }
    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string name, age_str, city;
        std::getline(iss, name, ',');
        std::getline(iss, age_str, ',');
        std::getline(iss, city);
        std::cout << name << " | " << age_str << " | " << city << '\n';
    }
    file.close();
}

int main() {
    printCSV("input.csv");
    return 0;
}