#include <iostream>

int main() {
    int arr[2][3][2] = {
        {{10, 20}, {30, 40}, {50, 60}},
        {{70, 80}, {90, 100}, {110, 120}}
    };
    std::cout << *(*(*(arr + 0) + 0) + 1) << " ";
    // arr[0][0][1]
    std::cout << *(*(*(arr + 1) + 2)) << " ";
    // arr[1][2][0]
    std::cout << arr[0][2][1];
    return 0;
}