#ifndef SPHERE_H
#define SPHERE_H

#include "../include/BasicObject.hpp"

class Sphere: public BasicObject {
using BasicObject::BasicObject;

public:
    double getIntersect(Ray r);
    Ray getOutgoingRay(Ray r);
};

#endif // !SPHERE_H