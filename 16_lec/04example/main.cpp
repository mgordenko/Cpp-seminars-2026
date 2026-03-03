#include <iostream>
#include <cmath>
#include <string>
#include <stack>
#include <vector>


struct Point {
    int x;
    int y;
    inline static int count = 10;
    double distance() {
        return std::sqrt(x * x + y * y);
    }
    Point(int x, int y) { // this, self
        this->x = x;
        this->y = y;
        abracadabra = 0;
    }
    void print() const { // this
        std::cout << x << ' ' << y << '\n';
        abracadabra++;
    }
    void setA() const {
        abracadabra = 100;
    }
    void getAbracadabra() {
        std::cout << abracadabra;
    }
    static void a() { // нет this нет объекта

    }
    mutable int abracadabra;
};

int main() {
    const Point p(1, 2);
    p.print();
}