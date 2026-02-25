#include <iostream>
#include <vector>

struct Example {
    int* arr;
    int size;
    void print() {
        for (int i = 0; i < size; ++i)
            std::cout << arr[i] << ' ';
        std::cout << size << '\n';
    }
};
struct Example2 {
    int arr[3];
    int size = 3;
    void print() {
        for (int i = 0; i < size; ++i)
            std::cout << arr[i] << ' ';
        std::cout << size << '\n';
    }
};
int main() {
    Example2 ex1 {{1, 2, 3}, 3};
    Example2 ex2 = ex1;
    ex2.arr[0] = 1000;
    ex1.print();
    ex2.print();
}