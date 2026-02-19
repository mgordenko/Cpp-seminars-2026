#include <iostream>
#include <deque>
#include <chrono>

int main() {
    std::deque<int> d = {1, 2, 3, 4};
    for (auto it = d.begin(); it != d.end(); ++it) {
        std::cout << *it << ' ';
    }
}