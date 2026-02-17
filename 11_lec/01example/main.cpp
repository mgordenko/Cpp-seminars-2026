#include <iostream>
#include <array>

int main() {
    std::array<double, 10> a = {11, 2, 33, 44, 15, 6, 17, 8};
    for (int i = 0; i < a.size(); ++i) {
        std::cout << a[i] << ' ';
    }
    for (int i = 0; i < a.size(); ++i) {
        std::cout << a.at(i) << ' ';
    }
    std::cout << '\n';
    for (std::array<double, 10>::iterator it = a.begin(); it < a.end(); ++it) {
        std::cout << *it << ' ';
    }
    std::cout << '\n';
    auto it3 = std::find(a.begin(), a.end(), 3);
    std::cout << it3 - a.begin();
    std::sort(a.begin(), a.begin() + 4);
    std::cout << '\n';
    for (std::array<double, 10>::iterator it = a.begin(); it < a.end(); ++it) {
        std::cout << *it << ' ';
    }
    std::cout << '\n';
}
