#include <iostream>
#include <vector>

void readVector(std::vector<int>& v) {
    int n;
    std::cin >> n;
    v.reserve(n);
    for (int i = 0; i < n; ++i) {
        int el;
        std::cin >> el;
        v.push_back(el);
    }
}

void printVector(const std::vector<int>& v) {
    for (int i = 0; i < v.size(); ++i) {
        std::cout << v[i] << ' ';
    }
    std::cout << '\n';
}

int main() {
    std::vector<int> v;
    readVector(v);
    printVector(v);
}