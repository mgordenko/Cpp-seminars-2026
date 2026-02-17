#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n = 5;
    std::vector<int> v;
    for (int i = 0; i < n; ++i) {
        v.push_back(i + 10);
    }
    v.insert(v.begin() + 1, 100);
    auto rem = std::remove(v.begin(), v.begin() + 2, 100);
    std::cout << *rem << '\n';
    for (int i = 0; i < v.size(); ++i) {
        std::cout << v[i] << ' ';
    }
}