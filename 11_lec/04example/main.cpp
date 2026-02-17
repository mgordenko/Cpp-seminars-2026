#include <iostream>
#include <vector>
#include <chrono>

int main() {
    std::vector<int> v1;
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 10000000; ++i)
        v1.push_back(0);
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << duration.count() << '\n';

    std::vector<int> v2;
    v2.reserve(10000000);
    start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 10000000; ++i)
        v2.push_back(0);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << duration.count() << '\n';
}