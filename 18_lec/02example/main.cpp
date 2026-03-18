#include <iostream>
#include <vector>

struct ArProgression {
    int a0;
    int d;
    ArProgression(int a0, int d) : a0(a0), d(d) { }
    int operator[](int index) const {
        return a0 + d*index;
    }
};
int main() {
    ArProgression ar(10, 2);
    for (int i = 0; i < 10; ++i) {
        std::cout << ar[i] << '\n';
    }
}