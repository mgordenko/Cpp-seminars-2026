#include <iostream>
#include <deque>
#include <vector>

int main() {
    std::deque<int> d = {10, 20, 30, 40};
    auto begin = d.begin();
    std::cout << *begin << '\n';
    d.push_front(50);
    std::cout << *begin << '\n';
    std::cout << '\n';

    std::vector<int> v = {10, 20, 30, 40};
    auto begin_v = v.begin();
    std::cout << *begin_v << '\n';
    v.push_back(50);
    std::cout << *begin_v << '\n';
}
