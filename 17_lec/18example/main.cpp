#include <iostream>
#include <deque>
#include <vector>
struct A {
    int value;
    int* arr;
    A() {};
    A(const A& a) : value(a.value) {
        arr = new int[value];
        for (int i = 0; i < value; ++i) {
            arr[i] = a.arr[i];
        }
    }
    void print() {
        std::cout << value << '\n';
        for (int i = 0; i < value; ++i) {
            std::cout << arr[i] << ' ';
        }
        std::cout << "\n";
    }
};
// тут много утечек памяти!!!
int main() {
    A a1 = A();
    a1.value = 3;
    int* arr = new int[]{1, 2, 3};
    a1.arr = arr;
    A a2 = a1;
    a1.print();
    a2.print();
    a1.value = 5;
    std::cout << "\n";
    a1.print();
    a2.print();
    a1.arr[0] = 100;
    std::cout << "\n";
    a1.print();
    a2.print();
}
