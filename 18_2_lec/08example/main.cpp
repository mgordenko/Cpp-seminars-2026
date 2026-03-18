#include <iostream>
#include <vector>
class A {
public:
    A() {std::cout << "A()\n";}
    A(const A& other) {std::cout << "A(const A& other)\n";}
    ~A() {std::cout << "~A()\n";}
    void f() {
        std::cout << "f() from A\n";
    }
};
class B : public A {
public:
    B() {std::cout << "B()\n";}
    B(const B& other) {std::cout << "B(const A& other)\n";}
    ~B() {std::cout << "~B()\n";}
    void f() {
        std::cout << "f() from B\n";
    }

};
void smth1(A a) {
    a.f();
}
void smth2(A& a) {
    a.f();
}
void smth3(A* a) {
    ((B*)(a))->f();
}
int main() {
    A* a = new B();
    smth3(a);
    A a2 = B();
    smth1(a2);
}