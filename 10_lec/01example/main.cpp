#include <iostream>
#include <fstream>
int square(int x1, int y1, int x2, int y2) {
    return std::abs(x2 - x1) * std::abs(y2 - y1);
}
int main() {
    std::ifstream in("input.txt");
    std::ofstream out("output.txt");
    int n;
    in >> n;
    int max_s = -1;
    for (int i = 0; i < n; ++i) {
        int x1, y1, x2, y2;
        in >> x1 >> y1 >> x2 >> y2;
        int s = square(x1, y1, x2, y2);
        if (s > max_s)
            max_s = s;
    }
    out << max_s;
    in.close();
    out.close();
}
