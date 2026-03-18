#include <iostream>
#include <vector>
class A {
public:
    int a1, a2;
    A() {std::cout << "A()\n";}
    A(const A& other) {std::cout << "A(const A& other)\n";}
    ~A() {std::cout << "~A()\n";}
    void f() {
        std::cout << "f() from A\n";
    }
};
class B : public A {
public:
    int b1, b2;
    B() {std::cout << "B()\n";}
    B(const B& other) {std::cout << "B(const A& other)\n";}
    B(int b) {std::cout << "B(int b)\n";}
    ~B() {std::cout << "~B()\n";}
    void f() {
        std::cout << "f() from B\n";
    }

};
void smth(A a) {
    a.f();
}
int main() {
    A a = A();
    smth(a);
    B b = B();
    smth(b);
    A ab = B();
    smth(ab);
}