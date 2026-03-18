#include <iostream>
#include <vector>
#include <map>
#include <set>

int main() {
    std::set<int> m;
    m.insert(20);
    m.insert(19);
    m.insert(24);
    m.insert(89);
    m.insert(24);
    for (auto it = m.begin(); it != m.end(); ++it) {
        std::cout << *it << ' ';
    }
}
