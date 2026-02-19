#include <iostream>
#include <vector>
#include <utility>

int main() {
    std::vector<std::pair<std::string, int> > v;
    v.push_back({"Ivanov", 10});
    v.push_back({"Smirnov", 5});
    v.push_back({"Loginov", 7});
    std::string maxSurname = "";
    int maxScore = -1;
    for (int i = 0; i < v.size(); ++i) {
        std::cout << v[i].first << ' ' << v[i].second << '\n';
    }
    for (auto it = v.begin(); it != v.end(); ++it) {
        std::cout << it->first << ' ' << (*it).second << '\n';
    }
    for (auto pair : v) {
        std::cout << pair.first << ' ' << pair.second << '\n';
    }
    for (auto [first, second] : v) {
        std::cout << first << ' ' << second << '\n';
    }
    for (auto [first, second] : v) {
        if (maxScore < second) {
            maxScore = second;
            maxSurname = first;
        }
    }
    std::cout << maxScore << ' ' << maxSurname << '\n';
}