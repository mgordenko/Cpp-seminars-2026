#include <iostream>
#include <fstream>

// printReverse(n) = printReverse(n - 1) cout

void printReverse(int n, std::ifstream& in, std::ofstream& out) {
    int num;
    in >> num;
    if (n > 1) {
        printReverse(n - 1, in, out);
    }
    out << num << ' ';
}
int main() {
    std::ifstream in("input.txt");
    std::ofstream out("output.txt");
    int n;
    in >> n;
    printReverse(n, in, out);
    in.close();
    out.close();
}