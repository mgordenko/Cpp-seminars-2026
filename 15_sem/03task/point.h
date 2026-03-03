//
// Created by Mariia Gordenko on 26.02.2026.
//

#ifndef CPP_SEM_EDA_COMPDS_2026_POINT_H
#define CPP_SEM_EDA_COMPDS_2026_POINT_H

struct Point {
    double x, y;
    Point(double x = 0, double y = 0);
    double distance(const Point& other) const;
    void print() const;
};

#endif //CPP_SEM_EDA_COMPDS_2026_POINT_H