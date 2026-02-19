#include <iostream>
#include <vector>

std::vector<int> merge(std::vector<int> a, std::vector<int> b) {
    int s1 = a.size();
    int s2 = b.size();
    int i1 = 0;
    int i2 = 0;
    std::vector<int> res;
    res.reserve(s1 + s2);
    while (i1 < s1 && i2 < s2) {
        if (a[i1] < b[i2]) {
            res.push_back(a[i1]);
            i1 += 1;
        }
        else {
            res.push_back(b[i2]);
            i2 += 1;
        }
    }
    while (i1 < s1) {
        res.push_back(a[i1]);
        i1 += 1;
    }
    while (i2 < s2) {
        res.push_back(a[i2]);
        i2 += 1;
    }
    return res;
}

int main() {
}