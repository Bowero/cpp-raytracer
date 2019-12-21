#ifndef RAY_H
#define RAY_H

#include "./Point.hpp"

class Ray {
public:
    Point origin;
    Point destination;

    Ray(Point origin_, Point destination_);
};

#endif // !RAY_H