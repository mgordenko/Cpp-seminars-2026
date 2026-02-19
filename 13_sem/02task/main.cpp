#include <iostream>
#include <vector>
#include <algorithm>

std::pair<double, double> minMax(const std::vector<double> &v) {
    auto [min, max] = std::minmax_element(v.begin(), v.end());
    return {*min, *max};
}

int main() {
    std::vector<double > v {10, 5, 6, 19, 92};
    //std::pair<double, double> res = minMax(v);
    auto [min, max] = minMax(v);
    std::cout << min << ' ' << max;
}