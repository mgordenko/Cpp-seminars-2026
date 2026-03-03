#include <iostream>
#include <string>
#include <vector>

struct Student {
    std::string name;
    int year;
    std::vector<int> grades;
    Student(std::string name, int year,  std::vector<int> grades) {
        this->name = name;
        this->year = year;
        this->grades = grades;
    }
    int age() const {
        return 2026 - year;
    }
    double average() const {
        double sum = 0;
        for (auto mark : grades) {
            sum += mark;
        }
        return sum / grades.size();
    }
    void print() const {
        std::cout << name << ' ' << age() << ' ' << average() << '\n';
    }
};
bool cmp_age(Student* a, Student* b) {
    return a->age() < b->age();
}
bool cmp_mark(Student* a, Student* b) {
    return a->average() < b->average();
}
int main() {
    std::vector<Student*> students;
    int n = 5;
    students.reserve(n);
    students.push_back(
        new Student("Anna", 1990, std::vector<int>{5, 4, 4, 5, 5}));
    students.push_back(
        new Student("Oleg", 1996, std::vector<int>{5, 4, 5, 4, 3}));
    students.push_back(
        new Student("Petr", 1992, std::vector<int>{5, 4, 5, 3, 3}));
    students.push_back(
        new Student("Elena", 1993, std::vector<int>{5, 4, 3, 3, 3}));
    students.push_back(
        new Student("Ilya", 1999, std::vector<int>{4, 4, 4, 4, 2}));
    for (Student* st : students)
        st->print();
    std::sort(students.begin(), students.end(), cmp_mark);
    std::cout << '\n';
    for (Student* st : students)
        st->print();
    std::cout << '\n';
    auto max_st = std::max_element(students.begin(), students.end(), cmp_age);
    (*max_st)->print();
    auto min_st = std::min_element(students.begin(), students.end(), cmp_age);
    (*min_st)->print();
}
