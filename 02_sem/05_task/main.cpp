#include <iostream>
#include <random>

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(1, 1000);

    std::cout << dist(gen) << '\n';
    std::cout << dist(gen) << '\n';

    return 0;
}