#include <iostream>
#include <vector>

int main() {
    int n = 3, m = 4;
    std::vector<std::vector<int> > v1(n, std::vector<int>(m));
    for (size_t i = 0; i < v1.size(); ++i) {
        for (size_t j = 0; j < v1[i].size(); ++j) {
            std::cout << v1[i][j] << ' ';
        }
        std::cout << '\n';
    }
    std::cout << '\n';
    std::vector<std::vector<int> > v2;
    for (int i = 0; i < n; ++i) {
        v2.push_back(std::vector<int>(m));
    }
    for (size_t i = 0; i < v1.size(); ++i) {
        for (size_t j = 0; j < v1[i].size(); ++j) {
            std::cout << v1[i][j] << ' ';
        }
        std::cout << '\n';
    }
}
