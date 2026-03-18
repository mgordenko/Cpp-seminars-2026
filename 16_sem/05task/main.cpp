#include <iostream>
#include <algorithm>
#include <vector>

void printVector(const std::vector<int>& v) {
    for (int i = 0; i < v.size(); ++i) {
        std::cout << v.at(i) << ' ';
    }
    std::cout << '\n';
}

std::vector<int> removeZeros(const std::vector<int>& v) {
    std::vector<int> result = v;
    result.erase(std::remove(result.begin(), result.end(), 1), result.end());
    return result;
}

int main() {
    std::vector<int> vector = {1, 2, 1, 3, 1, 7, 15};
    std::vector<int> result = removeZeros(vector);
    printVector(result);
}