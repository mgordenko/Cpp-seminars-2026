#include <iostream>

struct Counter {
    int counter;

    Counter() {
        counter = 0;
        std::cout << "Counter()\n";
    }

    ~Counter() {
        counter = 0;
        std::cout << "destr Counter()\n";
    }

    void increment() {
        ++counter;
        std::cout << "Cur value: " << counter << '\n';
    }

    int getValue() const {
        return counter;
    }
};
int main() {
    const Counter counter_const;
    std::cout << counter_const.getValue() << '\n';
    Counter counter;
    counter.increment();
    counter.increment();
    std::cout << counter.getValue() << '\n';

    return 0;
}