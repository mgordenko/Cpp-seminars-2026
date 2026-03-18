#include <iostream>

struct ArifmProgression {
    int a0;
    int d;
    ArifmProgression(int a0, int d) : a0(a0), d(d) {}
    int operator[](size_t index) {
        return a0 + d * (index);
    }
};

int main() {
    ArifmProgression a = ArifmProgression(10, 2);
    for (int i = 0; i < 5; ++i) {
        std::cout << a[i] << '\n';
    }
    return 0;
}
