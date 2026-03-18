#include <iostream>
#include <vector>
#include <cmath>

struct Array {
    int* data;
    size_t size;
    Array(size_t n) : size(n) {
        data = new int[n];
        std::cout << "Array() ";
    }
    ~Array() {
        delete[] data;
        std::cout << "~Array() ";
    }
};
int main() {
    Array a(5);
    std::cout << a.data << '\n';
    Array b = a; // проблема!
    std::cout << b.data << '\n';
}