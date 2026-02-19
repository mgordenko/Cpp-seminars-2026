#include <iostream>
#include <deque>

void printDeque(const std::deque<int>& d)
{
    std::deque<int> d_copy = d;
    while (!d_copy.empty())
    {
        std::cout << d_copy.front() << ' ';
        d_copy.pop_front();
    }
    std::cout << '\n';
}

int main()
{
    std::deque<int> d = { 1, 2, 3, 4, 5 };
    printDeque(d);
}