#include <iostream>
#include <vector>

// дано n, потом идут элементы, прочитать их в вектор, вывести

int main() {
    std::vector<int> v;
    int n;
    std::cin >> n;
    v.reserve(n);
    for (int i = 0; i < n; ++i) {
        int el = 0;
        //std::cin >> el;
        v.push_back(el);
        std::cout << i + 1 << ' ' << v.size() << ' ' << v.capacity() << '\n';
    }
    v.resize(5);
    std::cout << '\n';
    std::cout << v.size() << ' ' << v.capacity() << '\n';
    v.shrink_to_fit();
    std::cout << '\n';
    std::cout << v.size() << ' ' << v.capacity() << '\n';
    v.push_back(10);
    std::cout << '\n';
    std::cout << v.size() << ' ' << v.capacity() << '\n';
}
