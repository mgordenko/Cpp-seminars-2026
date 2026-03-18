#include <iostream>
#include <vector>
#include "point.h"
class IntArray {
    int* data;
    size_t size;
public:
    IntArray(size_t size) : size(size) {
        data = new int[size];
        for (int i = 0; i < size; ++i) {
            data[i] = 10;
        }
        std::cout << "IntArray(size_t size)\n";
    }
    IntArray(const IntArray& other) : size(other.size){
        this->data = new int[this->size];
        for (int i = 0; i < this->size; ++i) {
            data[i] = other.data[i];
        }
        std::cout << "IntArray(const IntArray& other)\n";
    }
    IntArray& operator=(const IntArray& other) {
        if (this != &other) {
            int* temp = data;
            this->size = other.size;
            this->data = new int[this->size];
            for (int i = 0; i < this->size; ++i) {
                data[i] = other.data[i];
            }
            delete[] temp;
        }
        std::cout << " IntArray& operator=(const IntArray& other)\n";
        return *this;
    }
    int& operator[](size_t index) {
        return data[index];
    }
    const int& operator[](size_t index) const {
        return data[index];
    }
    size_t sizesize() const {
        return size;
    }
    void print() const {
        for (int i = 0; i < size; ++i) {
            std::cout << data[i] << ' ';
        }
        std::cout << '\n';
    }
    ~IntArray() {
        delete[] data;
        std::cout << "~IntArray()\n";
    }
};
int main() {
    std::unique_ptr<IntArray> arr1 = std::make_unique<IntArray>(10);
    arr1->print();
    return 0;
}
