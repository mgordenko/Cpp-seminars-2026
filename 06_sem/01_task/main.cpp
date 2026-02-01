#include <iostream>

void swapPtr(double* a, double* b) {
    double tmp = *a;
    *a = *b;
    *b = tmp;
}

void swapRef(double& a, double& b) {
    double tmp = a;
    a = b;
    b = tmp;
}

int main() {
    double priceA = 12.5, priceB = 9.8;

    swapPtr(&priceA, &priceB);
    std::cout << priceA << ' ' << priceB << '\n';

    priceA = 12.5; priceB = 9.8;
    swapRef(priceA, priceB);
    std::cout << priceA << ' ' << priceB << '\n';

    return 0;
}