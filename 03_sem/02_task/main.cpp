#include <iostream>

int main() {
    int n;
    std::cin >> n;

    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += 2 * i + 1;
    }

    std::cout << sum << '\n';
    return 0;
}