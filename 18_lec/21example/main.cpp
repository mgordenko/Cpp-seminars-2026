#include <iostream>
#include <vector>
struct A {
    A() { std::cout << "A()\n"; }
    A(const A& other) { std::cout << "A(const A& other)\n"; }
    ~A() { std::cout << "~A()\n"; }
    void f() { std::cout << "A::f()\n"; }
};
struct B : public A {
    B() { std::cout << "B()\n"; }
    B(const B& other) { std::cout << "B(const B& other)\n"; }
    ~B() { std::cout << "~B()\n"; }
    void f() { std::cout << "B::f()\n"; }
};
int main() {
    A* aa = new A();
    A* ab = new B();
    B* bb = new B();
    aa->f();
    ab->f();
    bb->f();
    delete ab;
    delete bb;
    delete aa;
}