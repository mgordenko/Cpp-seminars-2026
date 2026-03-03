#include <iostream>
#include <queue>

void printQueue(std::queue<int> s) {
    while (!s.empty()) {
        std::cout << s.front() << ' ';
        s.pop();
    }
    std::cout << '\n';
}

std::queue<int> mergeQueues(const std::queue<int> &a, const std::queue<int> &b) {
    std::queue<int> queue1 = a;
    std::queue<int> queue2 = b;
    std::queue<int> res;

    while (!queue1.empty() && !queue2.empty()) {
        auto elem1 = queue1.front();
        auto elem2 = queue2.front();
        if (elem1 < elem2) {
            res.push(elem1);
            queue1.pop();
        } else {
            res.push(elem2);
            queue2.pop();
        }
    }
    while (!queue1.empty()) {
        res.push(queue1.front());
        queue1.pop();
    }
    while (!queue2.empty()) {
        res.push(queue2.front());
        queue2.pop();
    }
    return res;
}

int main()
{
    std::queue<int> a;
    std::queue<int> b;

    a.push(1);
    a.push(3);
    a.push(5);

    b.push(1);
    b.push(4);
    b.push(5);
    b.push(7);

    printQueue(mergeQueues(a, b));
}