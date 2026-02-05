#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ofstream out("output.txt", std::ios::app);
    out << "Hello World!\n";
    return 0;
}