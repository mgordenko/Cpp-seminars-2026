#include <iostream>
#include <vector>
struct Example1 {
    Example1() = default;
};
struct Example2 {
    Example1 ex1;
};

int main() {
    Example2 ex1;
    Example2 ex2 = ex1;
}