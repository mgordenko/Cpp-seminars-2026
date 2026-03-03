#include <iostream>
#include <vector>
#include <chrono>

int main() {
    int n = 10000;
    std::vector<std::vector<int> > v;
    v.reserve(n);
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < n; ++i) {
        v.push_back(std::vector<int>(20000));
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << duration.count() << '\n';
    std::cout << '\n';

    std::vector<std::vector<int> > v2;
    v2.reserve(n);
    start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < n; ++i) {
        v2.emplace_back(20000);
    }
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << duration.count() << '\n';
    std::cout << '\n';

}