#include <iostream>
#include <numeric>
#include <vector>

int sum1(const std::vector<int>& v) {
    int s = 0;
    for (int el : v) {
        s += el;
    }
    return s;
}
int sum2(const std::vector<int>& v) {
    return std::accumulate(v.begin(), v.end(), 0);
}
int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    std::cout <<  sum1(v) << '\n';
    std::cout <<  sum2(v) << '\n';
    return 0;
}