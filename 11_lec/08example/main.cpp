#include <iostream>
#include <vector>
#include <chrono>

void smthVector1(std::vector<int> v) {
    v.push_back(100);
    v.push_back(200);
}
void smthVector2(std::vector<int>& v) {
    v.push_back(100);
    v.push_back(200);
}
int main() {
    int n = 5;
    std::vector<int> v1(1000000, 5);
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 1000; ++i)
        smthVector1(v1);
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << duration.count() << '\n';

    std::vector<int> v2(1000000, 5);
    start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 1000; ++i)
        smthVector2(v2);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << duration.count() << '\n';
}