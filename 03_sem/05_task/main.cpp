#include <iostream>

int main() {
    int count = 0;
    long long sum = 0;
    int num;

    while (std::cin >> num && num != 0) {
        sum += num;
        ++count;
    }

    if (count == 0) {
        std::cout << "0\n0\n";
    } else {
        std::cout << sum << '\n';
        std::cout << 1.0 * sum / count << '\n';
    }

    return 0;
}