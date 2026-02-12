#include <iostream>

void fill(int** p, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i + 1; ++j) {
            p[i][j] = i + 1;
        }
    }
}

void print(int** p, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i + 1; ++j) {
            std::cout << p[i][j]  << ' ';
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
    fill(p, n);
    print(p, n);
    for (int i = 0; i < n; ++i) {
        delete[] p[i];
    }
    delete[] p;
    p = nullptr;
}