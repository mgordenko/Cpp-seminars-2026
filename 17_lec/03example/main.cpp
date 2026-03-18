#include <iostream>
#include <vector>
class IntPtr {
    int* ptr;
public:
    IntPtr(int value) : ptr(new int(value)) {
        std::cout << "IntPtr(int value)\n";
    }
    IntPtr(const IntPtr& other) : ptr(new int(*other.ptr)) {
        std::cout << "IntPtr(const IntPtr& other)\n";
    }
    IntPtr& operator=(const IntPtr& other) {
        std::cout << "IntPtr& operator=(const IntPtr& other)\n";
        *ptr = *other.ptr;
    }
    ~IntPtr() {
        std::cout << "~IntPtr()\n";
        delete ptr;
    }
};
int main() {
    IntPtr p(10);
}