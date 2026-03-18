#include <iostream>
#include <deque>
#include <vector>
struct B {
    B() {
        std::cout << "B()\n";
    };
    ~B() {
        std::cout << "~B()\n";
    };
};
class A {
    int size;
    int* arr;
    B b;
public:
    A(int size, int value) {
        this->size = size;
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = value;
        }
        std::cout << "A(int size, int value)()\n";
    };
    void print() {
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << ' ';
        }
        std::cout << "\n";
    }
    // ~A() {
    //     std::cout << "~A()\n";
    //     delete[] arr;
    // }
};
int main() {
    A a1 = A(10, 5);
    a1.print();
}
