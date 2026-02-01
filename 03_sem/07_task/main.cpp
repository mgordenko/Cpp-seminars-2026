#include <iostream>

int main() {
    float sum_f = 0.0f;
    float prev_f = 0.0f;
    int i = 1;

    do {
        prev_f = sum_f;
        sum_f += 1.0f / i;
        ++i;
    } while (sum_f != prev_f);

    std::cout << sum_f << '\n';
    //
    // double sum_d = 0.0;
    // double prev_d = 0.0;
    // i = 1;
    //
    // do {
    //     prev_d = sum_d;
    //     sum_d += 1.0 / i;
    //     ++i;
    // } while (sum_d != prev_d);
    //
    // std::cout << sum_d << '\n';

    return 0;
}