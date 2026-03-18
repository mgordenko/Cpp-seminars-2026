#include <iostream>
#include <deque>
#include <vector>
struct B {
    B() { std::cout << "B()\n"; }
    B(int b) {  std::cout << "B(int b)\n";  };
    ~B() {  std::cout << "~B()\n"; };
};
struct A {
    B b;
    A() { b = B(10); std::cout << "A()\n"; };
    ~A() {  std::cout << "~A()\n";  };
};
int main() {
    A a = A();
}
