#include <iostream>
#include <vector>

struct A {
    virtual void smth() {}
};
struct B : A {};
int main() {
    A a = B();
    std::cout << sizeof(a);
    B b = B();
    std::cout << sizeof(b);
    A* ab = new B();
}