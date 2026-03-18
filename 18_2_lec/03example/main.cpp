#include <iostream>
#include <vector>
class A {
private:
    int a;
protected:
    int b;
public:
    int c;
};
class B : protected A {
    void smthB() {
        a = 10;
        b = 20;
        c = 30;
    }
};
class C : public B {
    void smthC() {
        a = 10;
        b = 20;
        c = 30;
    }
};
int main() {
    A a;
    // a.a;
    // a.b;
    a.c;
    B b;
    // b.a;
    // b.b;
    b.c;
}