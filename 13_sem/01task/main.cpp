#include <iostream>
#include <vector>

std::vector<std::pair<std::string, int> > readScores(int n) {
    std::vector<std::pair<std::string, int> > v;
    v.reserve(n);
    for (int i = 0; i < n; ++i) {
        std::string s;
        std::cin >> s;
        int score;
        std::cin >> score;
        v.push_back({s, score});
    }
    return v;
}
int main() {
    int n;
    std::cin >> n;
    std::vector<std::pair<std::string, int> > v = readScores(n);
    for (int i = 0; i < v.size(); ++i) {
        std::cout << v[i].first << ' ' << v[i].second << '\n';
    }
}