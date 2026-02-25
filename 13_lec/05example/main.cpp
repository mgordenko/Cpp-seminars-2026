#include <iostream>
#include <vector>
#include <utility>

struct A {
    static int count;
};
int A::count = 0;

int main() {
    A a1;
    a1.count = 10;
    A a2;
    std::cout << a2.count;
    std::cout << A::count;
}