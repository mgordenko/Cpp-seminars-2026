#include <iostream>

class IntArray {
    int* data;
    size_t size;
public:
    size_t getSize() const {
        return size;
    }
    explicit IntArray(size_t size) : size(size) {
        data = new int[size];
        for (int i = 0; i < size; ++i) {
            data[i] = i + 1;
        }
        std::cout << "IntArray(size_t size)\n";
    }
    IntArray(const IntArray& other) : size(other.size) {
        data = new int[size];
        for (int i = 0; i < size; ++i) {
            data[i] = other.data[i];
        }
        std::cout << "IntArray(const IntArray& other)\n";
    }
    ~IntArray() {
        std::cout << "~IntArray()\n";
        delete[] data;
    }
    IntArray& operator=(const IntArray& other) {
        if (this != &other) {
            delete[] data;
            size = other.size;
            data = new int[size];
            for (int i = 0; i < size; ++i) {
                data[i] = other.data[i];
            }
        }
        std::cout << "IIntArray& operator=\n";
        return *this;
    }
    int& operator[](size_t index) {
        return data[index];
    }
    const int& operator[](size_t index) const {
        return data[index];
    }
    void print_array() {
        for (int i = 0; i < size; ++i) {
            std::cout << data[i] << ' ';
        }
        std::cout << '\n';
    }

};

int main() {
    const int size = 5;
    IntArray arr1(size);
    arr1.print_array();
    IntArray arr2 = arr1;
    arr2 = arr1;
    arr1[0] = 100;
    arr1.print_array();
    arr2.print_array();
    return 0;
}
