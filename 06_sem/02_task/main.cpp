#include <iostream>

int add(int a, int b) { return a + b; }
int multiply(int a, int b) { return a * b; }

int calculate(int x, int y, int (&operation)(int, int)) {
    return operation(x, y);
}

int (&get_operation(char op))(int, int) {
    if (op == '+') return add;
    if (op == '*') return multiply;
    return add;
}

int main() {
    std::cout << "5 + 3 = " << calculate(5, 3, add) << '\n';
    std::cout << "5 * 3 = " << calculate(5, 3, multiply) << '\n';

    int (&func_ref)(int, int) = get_operation('+');
    std::cout << "10 + 20 = " << func_ref(10, 20) << '\n';

    return 0;
}