#ifndef POINT_H
#define POINT_H

#include <cmath>

#include <iostream>

class Point {
    public:
        double x;
    double y;
    double z;

    Point();
    Point(double x_, double y_, double z_);
    const Point operator + (Point b);
    const Point operator - (Point b);
    const Point operator * (Point b);
    const Point mult(double b);
    const Point norm();
    const double dot(Point b);
    const Point cross(Point b);
};

#endif // !POINT_H