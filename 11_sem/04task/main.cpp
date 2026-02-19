#include <iostream>
#include <vector>

template<typename T>
T maxElement(const std::vector<T>& v) {
    return *std::max_element(v.begin(), v.end());
}

int main() {
    std::vector<int> vector = {1, 2, 3, 7, 15};
    std::cout << maxElement(vector) << '\n';
}