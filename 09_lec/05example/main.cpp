#include <iostream>

// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1

void createPascal(int** p, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            if (j == 0 || j == i)
                p[i][j] = 1;
            else
                p[i][j] = p[i-1][j-1]+p[i-1][j];
        }
    }
}
void print(int** p, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i + 1; ++j) {
            std::cout << p[i][j] << ' ';
        }
        std::cout << '\n';
    }
}
int main() {
    int n = 5;
    int** p = new int*[n];
    for (int i = 0; i < n; ++i) {
        p[i] = new int[i + 1];
    }
    createPascal(p, n);
    print(p, n);

    for (int i = 0; i < n; ++i) {
        delete[] p[i];
    }
    delete[] p;
    p = nullptr;
}