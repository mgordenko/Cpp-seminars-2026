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
    A& operator=(const A& other) {
        if (this != &other) {
            this->value = other.value;
            delete[] this->arr;
            this->arr = new int[value];
            for (int i = 0; i < value; ++i) {
                arr[i] = other.arr[i];
            }
        }
        return *this;
    }
    ~A() {
        delete[] arr;
    };
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
    a2 = a2;
    a1.print();
    a2.print();
}
