#include <iostream>
#include <string>

int main() {
    const int m = 3, n = 3;
    int a[m][n] = {{9, 8, 1}, {7, 6, 4}, {5, 4, 0}};
    int* p = &a[0][0];
    for (int i = 0; i < m * n; ++i) {
        std::cout << p[i] << ' ';
    }
    std::cout << '\n';
    for (int i = 0; i < m * n; ++i) {
        std::cout << &p[i] << ' ';
    }
    std::cout << '\n';
    for (int i = 0; i < m; ++i) {
        std::cout << *(a + i) << ' ';
        std::cout << sizeof(a[i]) << ' ';
        std::cout << '\n';
    }
}
