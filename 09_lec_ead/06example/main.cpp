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
void changer_1(int* p, int n) {
    p = new int[n];
    for (int j = 0; j < n; ++j) {
        p[j] = j + j;
    }
}
void changer(int** p, int n) {
    // for (int i = 0; i < n; ++i) {
    //     delete[] p[i];
    // }
    // delete[] p;
    //p = new int*[n];
    for (int i = 0; i < n; ++i) {
       // p[i] = new int[i + 1];
        for (int j = 0; j < i + 1; ++j) {
            p[i][j] = i * i;
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
    changer(p, n);
    print(p, n);

    int* ex = new int[n] {1, 2, 3, 4, 5};
    changer_1(ex, n);
    for (int i = 0; i < n; ++i) {
        std::cout << ex[i] << ' ';
    }
    delete[] ex;
    ex = nullptr;
    for (int i = 0; i < n; ++i) {
        delete[] p[i];
    }
    delete[] p;
    p = nullptr;
}