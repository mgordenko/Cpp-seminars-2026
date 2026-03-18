#include <iostream>
#include <vector>
class ArrayPtr {
    int* ptr;
    int size;
public:
    ArrayPtr(int value, int size) : ptr(new int[size]), size(size) {
        for (int i = 0; i < size; ++i)
            ptr[i] = value;
        std::cout << "IntPtr(int value)\n";
    }
    ArrayPtr(const ArrayPtr& other) : ptr(new int[other.size]), size(other.size){
        for (int i = 0; i < other.size; ++i)
            ptr[i] = other.ptr[i];
        std::cout << "IntPtr(const IntPtr& other)\n";
    }
    ArrayPtr& operator=(const ArrayPtr& other) {
        if (this != &other) {
            delete[] this->ptr;
            this->ptr = new int[other.size];
            this->size = other.size;
            for (int i = 0; i < other.size; ++i)
                ptr[i] = other.ptr[i];
        }
        return *this;
    }
    ~ArrayPtr() {
        std::cout << "~IntPtr()\n";
        delete[] ptr;
    }
    void print() const {
        for (int i = 0; i < size; ++i)
            std::cout << ptr[i] << ' ';
        std::cout << '\n';
    }
};
int main() {
    ArrayPtr a(10, 5);
    a.print();
    ArrayPtr b = a;
    b.print();
    a = a;
    a.print();
}