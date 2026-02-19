#include <iostream>
#include <deque>
#include <string>
#include <stack>
// [][[]]

// bool isValid(const std::string& s) {
//     std::stack<char> stk;
//     for (char ch : s) {
//         if (ch == '[')
//             stk.push(ch);
//         else {
//             if (stk.empty()) return false;
//             stk.pop();
//         }
//     }
//     return true;
// }
// [[][][][[]]
int main() {
    std::string s = "[[][][][[]]"; // []]]
    std::deque<char> stk;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '[') {
            stk.push_back(s[i]);
        } else {
            if (stk.empty()) {
                std::cout << "stack empty\n";
                break;
            }
            stk.pop_back();
        }
    }
    std::cout << stk.empty();
}