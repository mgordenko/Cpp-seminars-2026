#include <iostream>
#include <vector>

template<typename T>
T maxElement(const std::vector<T>& vector) {
    return *std::max_element(vector.begin(), vector.end());
}

int main() {
    std::vector<int> vector = {1, 2, 3, 7, 15};
    std::cout << maxElement(vector) << '\n';
}