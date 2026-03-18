#include <iostream>
#include <vector>
class A {
    private:
        int a;
    protected:
        int b;
    public:
        int c;
    void smthA() {
        a = 10;
        b = 20;
        c = 30;
    }
    void setA(int value) {a = value;}
};
class B : private A {
    void smthB() {
        // a = 10;
        setA(100);
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