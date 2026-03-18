#include <iostream>
#include <string>
#include <vector>

struct B;
struct A {
  std::string name;
    A() { name = "A"; }
    // A(const B& other) : name("A") {}
    //A(const A& other) : name("A") {}
};
struct B : public A {
    B() { name = "B"; }
    // ...
};

int main() {
    A a;         // "A"
    std::cout << a.name << '\n';
    B b; b.name;        // "B"
    std::cout << b.name << '\n';
    A aa = b;
    std::cout << aa.name << '\n';
}