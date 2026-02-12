#include <iostream>

int main() {
    int **arr = new int*[2];
    for(int i = 0; i < 2; i++) {
        arr[i] = new int[3];
        for(int j = 0; j < 3; j++) {
            arr[i][j] = i * 3 + j + 1;
        }
    }
    std::cout << *(*(arr + 1) + 2);
    // arr[1][2] --> 6
}