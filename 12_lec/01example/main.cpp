#include <iostream>
#include <vector>

void printVector(const std::vector<int>& v) {
    for (int i = 0; i < v.size(); ++i) {
        std::cout << v[i] << ' ';
    }
    std::cout << '\n';
}
int main() {
    std::vector<int> v1 = {1, 2, 3};
    std::vector<int> v2 = v1;
    v1[0] = 100;
    printVector(v1);
    printVector(v2);
}
