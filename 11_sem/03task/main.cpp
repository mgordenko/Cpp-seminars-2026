#include <iostream>
#include <numeric>
#include <vector>

int sum(const std::vector<int>& v){
    int total = 0;
    for (int i = 0; i < v.size(); ++i) {
        total += v[i];
    }
    return total;
}

int sum2(const std::vector<int>& v) {
    return std::accumulate(v.begin(), v.end(), 0);
}

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    std::cout <<  sum(v) << '\n';
    std::cout <<  sum2(v) << '\n';
    return 0;
}