#include <iostream>
#include <fstream>

int main() {
    std::ofstream out("output.txt");
    out << "hello";
    out.close();
    std::ifstream in("output.txt");
    std::string s;
    if (in.is_open()) {
        in >> s;
        std::cout << s << '\n';
        in.close();
    }
    return 0;
}