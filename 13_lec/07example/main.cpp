#include <iostream>
#include <vector>
struct Example1 {
    int a;
    char b;
    double c;
};
struct Example2 {
    int a = 10;
    double c = a;
    char b = c;
};
struct Example3 {

};
int main() {
    Example1 ex1;
    std::cout << sizeof(ex1) << '\n';
    Example2 ex2;
    std::cout << sizeof(ex2) << '\n';
    Example3 ex3;
    std::cout << sizeof(ex3) << '\n';
}