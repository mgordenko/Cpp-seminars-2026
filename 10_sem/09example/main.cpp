#include <iostream>
#include <fstream>

int main() {
    std::ofstream out("output.txt", std::ios::app);
    std::fstream f("output.txt", std::ios::in | std::ios::out);
    f << "rw3ergg";
    out << "efrfsgn";
}