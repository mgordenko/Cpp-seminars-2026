#include <iostream>
#include <vector>
#include <utility>

std::pair<int, int> findMinMax(const std::vector<int>& v)
{
    if (v.empty()) {
        std::cout << "vec is empty" << '\n';
        return std::make_pair(0, 0);
    }
    int min = v[0];
    int max = v[0];

    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i] > max)
        {
            max = v[i];
        }
        if (v[i] < min)
        {
            min = v[i];
        }
    }
    return std::make_pair(min, max);
}
int main()
{
    std::vector v = { 4, 3, 2, 1, 0, 3, 4, 5, 6, 12 };
    std::pair min_max = findMinMax(v);

    std::cout << min_max.first << ' ' << min_max.second << '\n';
}