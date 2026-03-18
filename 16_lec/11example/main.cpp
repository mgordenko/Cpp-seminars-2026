#include <iostream>
#include <deque>
#include <vector>
struct B {
    int* b;
    // умалчиваемый конструктор
    // копирующий конструктор
    // деструктор
    // копирующее присваинвание =
    B() {
        b = new int(0);
    }
};
int main() {
    B* b1 = new B();
    B* b2 = new B(b1);
    *b1 = *b2;
    delete b1;
    delete b2;
}
