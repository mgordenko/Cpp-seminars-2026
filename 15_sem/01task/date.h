//
// Created by Mariia Gordenko on 02.03.2026.
//

#ifndef CPP_SEM_EDA_COMPDS_2026_DATE_H
#define CPP_SEM_EDA_COMPDS_2026_DATE_H


class Date {
    int day;
    int month;
    int year;
public:
    void print() const;
    Date();
    Date(int day, int month, int year);
    bool isLeapYear();
};

#endif //CPP_SEM_EDA_COMPDS_2026_DATE_H