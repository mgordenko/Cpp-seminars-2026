//
// Created by Mariia Gordenko on 02.03.2026.
//

#include "date.h"
#include <iostream>

void Date::print() const {
    std::cout << day << '.' << month << '.' << year << '\n';
}
Date::Date() : Date(1, 1, 1970) { }

Date::Date(int day, int month, int year) {
    this->day = day;
    this->month = month;
    this->year = year;
}

bool Date::isLeapYear() {
    return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
}