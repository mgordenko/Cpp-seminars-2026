#include <iostream>
#include <string>
// std::array лучше использовать его
template <size_t N, size_t M>
void fill(int (&arr)[N][M], int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = i + j + 1;
        }
    }
}

int main() {
    int const n = 5;
    const int m = 4;
    int b[n][m];
    fill(b, n, m);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            b[i][j] = i + j + 1;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << b[i][j] << ' ';
        }
        std::cout << '\n';
    }

    std::cout << '\n';
}
