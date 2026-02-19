#include <iostream>
#include <stack>
void printStack(std::stack<int> s) { // copy!!!
    while (!s.empty()) {
        std::cout << s.top() << ' ';
        s.pop();
    }
    std::cout << '\n';
}
std::stack<int> reverseStack(const std::stack<int>& s) {
    std::stack copy = s;
    std::stack <int> answer;

    while (!copy.empty()) {
        answer.push(copy.top());
        copy.pop();
    }

    return answer;
}
int main() {
    std::stack<int> s;
    s.push(1); s.push(2); s.push(3);
    printStack(s);
    std::stack<int> reversed = reverseStack(s);
    printStack(reversed);
}