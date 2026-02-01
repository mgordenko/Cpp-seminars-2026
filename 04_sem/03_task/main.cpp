#include <iostream>

template<typename T>
T sumRange(T a, T b) {
    if (a > b) return T{0};
    T sum = T{0};
    for (T i = a; i <= b; ++i) {
        sum += i;
    }
    return sum;
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << sumRange(a, b) << '\n';
    return 0;
}