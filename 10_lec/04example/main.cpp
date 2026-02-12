#include <iostream>
#include <fstream>

int main() {
    std::ifstream in("input.txt");
    int n;
    in >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i) {
        in >> arr[i];
    }
    int pos = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] != 0) {
            arr[pos] = arr[i];
            ++pos;
        }
    }
    for (int i = pos; i < n; ++i) {
        arr[i] = 0;
    }
    std::ofstream out("output.txt");
    for (int i = 0; i < n; ++i) {
        out << arr[i] << ' ';
    }
    in.close();
    out.close();
    delete[] arr;
    arr = nullptr;
}