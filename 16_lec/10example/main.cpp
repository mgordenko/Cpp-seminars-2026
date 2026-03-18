#include <iostream>
#include <deque>
#include <vector>
struct B {
    int* b;
    B() {
        b = new int(0);
        std::cout << "B()\n";
    };
    ~B() {
        delete b;
        std::cout << "~B()\n";
    };
};
int main() {
    B* b = new B();
    delete b;
}
