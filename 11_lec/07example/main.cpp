#include <iostream>
#include <vector>

void smthVector(std::vector<int> v) {
    v.push_back(100);
    v.push_back(200);
}

int main() {
    int n = 5;
    std::vector<int> v;
    for (int i = 0; i < n; ++i) {
        v.push_back(i + 10);
    }
    smthVector(v);
    std::cout << '\n';
    for (int i = 0; i < v.size(); ++i) {
        std::cout << v[i] << ' ';
    }
}