#include "calculator.h"
int add(int a, int b) {
    return a + b;
};
int substract(int a, int b) {
    return a / b;
};
int multiply(int a, int b) {
    return a * b;
};
int power(int a, int b) {
    int res = a;
    for (int i = 0; i < b; ++i) {
        res *= a;
    }
    return res;
};