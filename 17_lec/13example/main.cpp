#include <iostream>
#include <cmath>
#include <string>
#include <stack>
#include <vector>
struct A {
    A() { std::cout << "A()\n"; }
    ~A() { std::cout << "~A()\n"; }
};
struct B {
    B() { std::cout << "B()\n"; }
    ~B() { std::cout << "~B()\n"; }
};
struct C {
    A a;
    B b;
    int* p;
    C() {
        p = new int(0);
    }
    ~C() { std::cout << "~C()\n";
        delete p;
    }
};
int main() {
    C* c = new C();
    delete c;
}