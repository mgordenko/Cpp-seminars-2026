#include <iostream>
#include <vector>

std::vector<int> makeVector(int n, int value) {
    std::vector<int> v(n, value);
    return v;
}

void printVector(const std::vector<int>& v) {
    for (int i = 0; i < v.size(); ++i) {
        std::cout << v[i] << ' ';
    }
    std::cout << '\n';
}

int main() {
    std::vector<int> v = makeVector(10, 7);
    printVector(v);
}