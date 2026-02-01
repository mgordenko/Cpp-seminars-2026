#include <iostream>

int main() {
    int n;
    std::cin >> n;

    long long sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    std::cout << sum << '\n';
    return 0;
}