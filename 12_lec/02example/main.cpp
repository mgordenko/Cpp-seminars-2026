#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int> > m1 = {{1, 2, 3}, {4, 5, 6}};
    std::vector<std::vector<int> > m2 = m1;
    m1[0][0] = 100;
    for (int i = 0; i < m1.size(); ++i) {
        for (int j = 0; j < m1[0].size(); ++j) {
            std::cout << m1[i][j] << ' ';
        }
        std::cout << '\n';
    }
    for (int i = 0; i < m2.size(); ++i) {
        for (int j = 0; j < m2[0].size(); ++j) {
            std::cout << m2[i][j] << ' ';
        }
        std::cout << '\n';
    }
}
