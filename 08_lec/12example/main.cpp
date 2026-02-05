#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream in1("output.txt");
    std::string num;
    while (in1 >> num) {
        std::cout << num << '\n';
    }
    in1.close();
    std::ifstream in2("output.txt");
    std::string num2;
    while (std::getline(in2, num2)) {
        std::cout << num2 << '\n';
    }
    in1.close();
    in2.close();
    return 0;
}