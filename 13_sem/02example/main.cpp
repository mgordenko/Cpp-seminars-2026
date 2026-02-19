#include <iostream>
#include <vector>

int main() {
    std::vector<int> v1 = {1, 2, 3};
    for (size_t i = 0; i < v1.size(); ++i) {
        std::cout << v1[i] << ' ';
    }
    std::cout << '\n';
    // auto it
    for (std::vector<int>::iterator it = v1.begin(); it != v1.end(); ++it) {
        std::cout << *it << ' ';
        *it += 1;
    }
    std::cout << '\n';
    // auto it
    for (std::vector<int>::const_iterator it = v1.cbegin(); it != v1.cend(); ++it) {
        std::cout << *it << ' ';
        //*it += 1;
    }
    for (auto el : v1) { // for el in v1:
        std::cout << el << ' ';
    }
    std::cout << '\n';
    //  {1, 2, 3};
    auto it = v1.end() - 1; //  на 3
    v1.pop_back();
    std::cout << *it;
}
