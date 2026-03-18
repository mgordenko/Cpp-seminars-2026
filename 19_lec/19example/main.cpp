#include <iostream>
#include <vector>
struct A {
    A() { std::cout << "A()\n"; }
    ~A() { std::cout << "~A()\n"; }
};
struct B : public A {
    B() { std::cout << "B()\n"; }
    ~B() { std::cout << "~B()\n"; }
};
struct D {
    D() { std::cout << "D()\n"; }
    ~D() { std::cout << "~D()\n"; }
};
struct C : public B {
    D d;
    C() : B(), d() { std::cout << "C()\n"; }
    ~C() { std::cout << "~C()\n"; }
};

int main() {
    C* c = new C();
    delete c;
}