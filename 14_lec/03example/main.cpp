#include <iostream>
#include <algorithm>
#include <vector>

struct Rectangle {
    int a, b;
    inline static int count = 0;
    Rectangle(int a, int b) { // this
        this->a = a;
        this->b = b;
        count++;
    }
    void print() const {
        std::cout << this->a << ' ' << b;
    }
    static int getCount() {
        return count;
    }
};
int main() {
    Rectangle r1(10, 20);
    Rectangle r2(15, 16);
    std::cout << r1.a << ' ' << r1.b << '\n';
    std::cout << r1.count << '\n';
    std::cout << r2.a << ' ' << r2.b << '\n';
    std::cout << r2.count << '\n';
}
