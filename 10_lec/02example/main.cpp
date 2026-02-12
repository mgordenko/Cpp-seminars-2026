#include <iostream>
#include <fstream>

int main() {
    std::ifstream in("input.txt");
    int n;
    in >> n;
    int len;
    in >> len;
    int* lens = new int[n];
    for (int i = 0; i < n; ++i) {
        in >> lens[i];
    }
    int pos = n + 1;
    for (int i = 0; i < n; ++i) {
        if (lens[i] < len) {
            pos = i + 1;
            break;
        }
    }
    std::ofstream out ("output.txt");
    out << pos;
    delete[] lens;
    lens = nullptr;
    out.close();
    in.close();
}
