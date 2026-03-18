#include <iostream>
#include <vector>
struct A {
    A() { std::cout << "A()\n"; }
    A(const A& other) { std::cout << "A(const A& other)\n"; }
    ~A() { std::cout << "~A()\n"; }
};
struct B : public A {
    B() { std::cout << "B()\n"; }
    B(const B& other) { std::cout << "B(const B& other)\n"; }
    ~B() { std::cout << "~B()\n"; }
};
void smth(A a) {}
void smth(A* a) {}
int main() {
    B* b = new B();
    smth(b);
    delete b;
}