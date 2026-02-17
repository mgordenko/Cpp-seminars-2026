#include <iostream>
#include <vector>

int main() {
    /*
    прочитать число n - колво эл-ов массива, затем эти n чисел
    записать их в массив, посчитать сумму и вывести
     */
    int n = 5;
    std::vector<int> v;
    v.reserve(n);
    for (int i = 0; i < n; ++i) {
        v.push_back(i + 10);
    }
    int sum = 0;
    for (int i = 0; i < n; ++i) {
       sum += v[i];
    }
    std::cout << sum;
}