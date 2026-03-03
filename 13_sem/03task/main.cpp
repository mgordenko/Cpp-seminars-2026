#include <iostream>
#include <string>
#include <vector>


struct Athlete {
    std::string name;
    std::string sport;
    int medals;
    int birthYear;
};

int calculateAge(int birthYear) {
    return 2026 - birthYear;
}

void printAthletesUnder25(const std::vector<Athlete>& athletes) {
    bool found = false;
    for (int i = 0; i < athletes.size(); i++) {
        int age = calculateAge(athletes[i].birthYear);
        if (age < 25) {
            std::cout << athletes[i].name << " | "
                 << athletes[i].sport << " | "
                 << athletes[i].medals << " | "
                 << athletes[i].birthYear << " | "
                 << age << '\n';
            found = true;
        }
    }
}

Athlete findAthleteWithMostMedals(const std::vector<Athlete>& athletes) {
    Athlete best = athletes[0];
    for (int i = 1; i < athletes.size(); i++) {
        if (athletes[i].medals > best.medals) {
            best = athletes[i];
        }
    }
    return best;
}

void printAllAthletes(const std::vector<Athlete>& athletes) {
    for (int i = 0; i < athletes.size(); i++) {
        int age = calculateAge(athletes[i].birthYear);
        std::cout << athletes[i].name << " | "
             << athletes[i].sport << " | "
             << athletes[i].medals << " | "
             << athletes[i].birthYear << " | "
             << age << '\n';
    }
}

int main() {
    std::vector<Athlete> athletes;

    athletes.push_back({"Алексей Смирнов", "Плавание", 5, 2002});
    athletes.push_back({"Мария Иванова", "Легкая атлетика", 3, 2005});
    athletes.push_back({"Дмитрий Петров", "Бокс", 8, 1998});
    athletes.push_back({"Анна Сидорова", "Гимнастика", 12, 2003});
    athletes.push_back({"Сергей Козлов", "Тяжелая атлетика", 4, 1995});

    printAllAthletes(athletes);

    printAthletesUnder25(athletes);

    Athlete best = findAthleteWithMostMedals(athletes);
    std::cout << best.name << " | " << best.sport << " | " << best.medals << '\n';

    return 0;
}