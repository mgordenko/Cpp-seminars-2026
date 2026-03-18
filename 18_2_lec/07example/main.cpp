#include <iostream>
#include <vector>
struct A {
    void f(int) {
        std::cout << "A::f(int)\n";
    }
};
struct B : public A {
    void f(int) {
        std::cout << "B::f(int)\n";
    }
};
int main() {
    A a = A();
    a.f(1);
    B b = B();
    b.f(1);
    A ab = B();
    ab.f(1);
}