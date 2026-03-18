#include <iostream>
#include <vector>
struct A {
    A() { std::cout << "A()\n"; }
    A(const A& other) { std::cout << "A(const A& other)\n"; }
    virtual ~A() { std::cout << "~A()\n"; }
    virtual void f() { std::cout << "A::f()\n"; }
};
struct B : public A {
    B() { std::cout << "B()\n"; }
    B(const B& other) { std::cout << "B(const B& other)\n"; }
    ~B() { std::cout << "~B()\n"; }
    void f() override { std::cout << "B::f()\n"; }
};
int main() {
    std::vector<A*> v;
    v.emplace_back(new A());
    v.emplace_back(new B());
    for (const auto& a : v) {
        a->f();
    }
    for (auto& a : v) {
        delete a;
    }
}