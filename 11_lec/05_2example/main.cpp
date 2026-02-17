#include <iostream>
#include <vector>

int main() {
    int n = 5;
    std::vector<int> v;
    v.reserve(n);
    for (int i = 0; i < n; ++i) {
        v.push_back(i + 10);
    }
    auto first = v.begin();
    for (int i = 0; i < n; ++i) {
        v.push_back(i + 10);
    }
    for (int i = 0; i < v.size(); ++i) {
        std::cout << v[i] << ' ';
    }
    std::cout << '\n';
    std::cout << *first;
}