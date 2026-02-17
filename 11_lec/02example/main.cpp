#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;
    for (int i = 0; i < 20; ++i) {
        v.push_back(0);
        std::cout << i + 1 << ' ' << v.size() << ' ' << v.capacity() << '\n';
    }
}
