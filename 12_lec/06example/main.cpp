#include <iostream>
#include <vector>
#include <tuple>

int main() {
    std::vector<std::tuple<std::string, int> > v;
    v.push_back({"Ivanov", 10});
    v.push_back({"Smirnov", 5});
    v.push_back({"Loginov", 7});
    std::string maxSurname = "";
    int maxScore = -1;
    for (int i = 0; i < v.size(); ++i) {
        std::cout << std::get<0>(v[i])<< ' ' << std::get<1>(v[i])<< '\n';
    }
    for (auto [first, second] : v) {
        std::cout << first << ' ' << second << '\n';
    }
    auto [surname, mark] = v[0];
    for (auto [first, second] : v) {
        if (maxScore < second) {
            maxScore = second;
            maxSurname = first;
        }
    }
    std::cout << maxScore << ' ' << maxSurname << '\n';
}