#include "../include/Sphere.hpp"

double Sphere::getIntersect(Ray r) {
    Point op = center - r.origin;
    double det = op.dot(r.destination) * op.dot(r.destination) - op.dot(op) + radius * radius;
    if (det < 0)
        return -1;
    double dist = op.dot(r.destination) - sqrt(det);
    if (dist > 1e-4)
        return dist;
    dist = op.dot(r.destination) + sqrt(det);
    if (dist > 1e-4)
        return dist;
    return -1;
}