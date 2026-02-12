#include <iostream>
#include <fstream>

int main() {
    std::ifstream in("input.txt");
    int n;
    in >> n;
    int len;
    in >> len;
    int pos = n + 1;
    int curr;
    for (int i = 0; i < n; ++i) {
        in >> curr;
        if (curr < len) {
            pos = i + 1;
            break;
        }
    }
    std::ofstream out ("output.txt");
    out << pos;
    out.close();
    in.close();
}
