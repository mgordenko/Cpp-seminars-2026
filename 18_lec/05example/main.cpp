#include <iostream>
#include <vector>
#include <utility>

struct A {
    A() { std::cout << "A()\n"; }
    A(const A& a) { std::cout << "A(const A& a)\n"; }
};
struct B {
    B() { std::cout << "B()\n"; }
    B(const B& b) { std::cout << "B(const B& b)\n"; }
};
struct C {
    B b;
    A a;
    C() : a(), b() {std::cout << "C()\n";}
    C(const C& c) = default;
    //C(const C& c) : a(c.a), b(c.b) {std::cout << "C(const C& c)\n"; }
};
int main() {
    C c1 = C(); // A B
    C c2 = C(c1);
}