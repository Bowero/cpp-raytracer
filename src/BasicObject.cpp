#include "../include/BasicObject.hpp"

Point center;
double radius;
Material material;
Point color;

BasicObject::BasicObject() {
    center = Point(0, 0, 0);
    radius = 0;
    material = Material::DIFFUSE;
}

BasicObject::BasicObject(Point center_, double radius_, Material material_,
    Point color_): center(center_), radius(radius_), material(material_), color(color_) {}