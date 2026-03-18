#include <iostream>
#include <string>
#include <set>
#include <algorithm>
struct Student {
    std::string name;
    int id;
    int group;
    Student(std::string name, int id, int group)
        : name(std::move(name)), id(id), group(group) {
    }
    bool operator<(const Student& st) const {
        return id < st.id;
    }
    friend std::ostream& operator<<(std::ostream& os, const Student& st) {
        os << st.id << ' ' << st.name << ' ' << st.group;
        return os;
    }
};
bool comp(const Student& st) {
    return st.id == 10;
}
int main() {
    std::set<Student> s;
    s.insert(Student("Anna", 10, 1));
    s.insert(Student("Petr", 10, 2));
    s.insert(Student("Oleg", 12, 1));
    s.insert(Student("Ivan", 13, 2));
    for (auto it = s.begin(); it != s.end(); ++it) {
        std::cout << *it << '\n';
    }
    std::cout << *s.find(Student("",10,0));
    std::cout << *std::find_if(s.begin(), s.end(), comp);
}