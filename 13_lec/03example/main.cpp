#include <iostream>
#include <algorithm>
#include <vector>

struct Rectangle {
    int a, b;
    Rectangle(int side1, int side2) {
        a = side1;
        b = side2;
    }
    int Perimetr() {
        return 2 * (a + b);
    }
    int Area() {
        return a * b;
    }
    void Print() { // this
        std::cout << a << ' ' << b << ' ' << Perimetr() << ' ' << Area() << '\n';
    }
};
bool compRect(Rectangle& r1, Rectangle& r2) {
    return r1.Area() < r2.Area();
}
int main() {
    std::vector<Rectangle> r;
    int n = 5;
    r.push_back(Rectangle(7, 10));
    r.push_back(Rectangle(17, 1));
    r.push_back(Rectangle(3, 10));
    r.push_back(Rectangle(5, 4));
    r.push_back(Rectangle(17, 10));
    for (int i = 0; i < n; ++i)
        r[i].Print();
    std::cout << '\n';
    std::sort(r.begin(), r.end(), compRect);
    for (int i = 0; i < n; ++i)
        r[i].Print();
    std::cout << '\n';
    Rectangle r_max = r[0];
    for (int i = 0; i < n; ++i)
        if (r[i].Area() > r_max.Area())
            r_max = r[i];
    r_max.Print();
}
