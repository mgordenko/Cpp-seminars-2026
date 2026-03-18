#include <iostream>
#include <vector>
class D {
public:
    D() {std::cout << "D()\n";}
    ~D() {std::cout << "~D()\n";}
};
class A {
public:
    A() {std::cout << "A()\n";}
    ~A() {std::cout << "~A()\n";}
};
class B : public A {
public:
    B() {std::cout << "B()\n";}
    B(int b) {std::cout << "B(int b)\n";}
    ~B() {std::cout << "~B()\n";}
};
class C : public B {
    D d;
public:
    C() : B() {std::cout << "C()\n";}
    ~C() {std::cout << "~C()\n";}
};
int main() {
    C c;
}