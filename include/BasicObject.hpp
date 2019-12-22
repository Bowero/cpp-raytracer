#ifndef BASICOBJECT_H
#define BASICOBJECT_H

#include "../include/Point.hpp"
#include "../include/Material.hpp"
#include "../include/Ray.hpp"

class BasicObject {
public:
    Point center;
    double radius;
    Material material;
    Point color;

    BasicObject();
    BasicObject(Point center_, double radius_, Material material_, Point color_);
};

#endif // !BASICOBJECT_H