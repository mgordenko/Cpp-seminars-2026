#include <iostream>
#include <string>
#include <vector>
#include <string>
#include <set>

struct Student {
    std::string name;
    int id;
    int group;
    Student(std::string name, int id, int group) : name(name), id(id), group(group) {}
    // bool operator<(const Student& rhs) const {
    //     return id < rhs.id;
    // }
};
struct StudentCompare {
    bool operator()(const Student& lhs, const Student& rhs) {
        return lhs.name < rhs.name;
    }
};
int main() {
    std::set<Student, StudentCompare> students;
    students.insert(Student("Jane", 4, 5));
    students.insert(Student("John", 1, 2));
    students.insert(Student("John", 2, 3));

    for (const Student& student : students) {
        std::cout << student.id << ' ' << student.name << std::endl;
    }
}