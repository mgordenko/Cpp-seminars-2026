#include <iostream>
#include <deque>
#include <vector>
struct IntPtr {
    int* ptr;
    IntPtr(int value) : ptr(new int(value)) {
        std::cout << "IntPtr(int value)\n";
    }
    IntPtr(const IntPtr& copy) : ptr(new int(*copy.ptr)) {
        std::cout << "IntPtr(const IntPtr& copy) \n";
    }
    ~IntPtr() {
        std::cout << "~IntPtr()\n";
        delete ptr;
    }
};
int main() {
    //int* a = new int(10);
    IntPtr i(10);
}
