#include <iostream>

struct Array {
    explicit Array(size_t n) : size(n) {
        data = new int[n];
        std::cout << "Array()\n";
    }
    Array(const Array& other) {
        size = other.size;
        data = new int[other.size];
        std::cout << "Array(const Array& other)\n";
    }
    ~Array() {
        delete[] data;
        std::cout << "~Array()\n";
    }
    void print() const {
        d = 10;
        std::cout << "print()\n";
    }
    static void smth() {
        std::cout << "smth()\n";
    }
    inline static int ferh = 10;
private:
    mutable int d;
    int* data;
    size_t size;
};
void printArray(Array a) {
    std::cout << "printArray()\n";
}
int main() {
    const Array a = (Array)5;
    a.print();
    printArray((Array)10);
    Array b(a);
    Array::smth();
}