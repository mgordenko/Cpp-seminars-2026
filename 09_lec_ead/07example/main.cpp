#include <iostream>

// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1

void print(int** p, int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << p[i][j] << ' ';
        }
        std::cout << '\n';
    }
}
int main() {
    int n = 5, m = 6;
    int** p = new int*[n];
    for (int i = 0; i < n; ++i) {
        p[i] = new int[m];
    }
    int num = 0;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            for (int j = 0; j < m; ++j) {
                p[i][j] = ++num;
            }
        } else {
            for (int j = m - 1; j >= 0; --j) {
                p[i][j] = ++num;
            }
        }
    }
    print(p, n, m);
    delete[] p;
    p = nullptr;
}