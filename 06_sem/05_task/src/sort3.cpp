#include "sort3.h"

void swap(int& x, int& y) {
    int tmp = x;
    x = y;
    y = tmp;
}

void sortThree(int& a, int& b, int& c) {
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);
}