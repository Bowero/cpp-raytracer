#include <cmath>

#include <iostream>

#include "../include/Point.hpp"

double x;
double y;
double z;

Point::Point() {
  x = 0;
  y = 0;
  z = 0;
}
Point::Point(double x_, double y_, double z_): x(x_), y(y_), z(z_) {};

const Point Point::operator + (Point b) {
  return Point(x + b.x, y + b.y, z + b.z);
}
const Point Point::operator - (Point b) {
  return Point(x - b.x, y - b.y, z - b.z);
}
const Point Point::operator * (Point b) {
  return Point(x * b.x, y * b.y, z * b.z);
}
const Point Point::mult(double b) {
  return Point(x * b, y * b, z * b);
}
const Point Point::norm() {
  return Point(x / sqrt(x * x + y * y + z * z), y / sqrt(x * x + y * y + z * z), z / sqrt(x * x + y * y + z * z));
}
const double Point::dot(Point b) {
  return x * b.x + y * b.y + z * b.z;
}
const Point Point::cross(Point b) {
  return Point(y * b.z - z * b.y, z * b.x - x * b.z, x * b.y - y * b.x);
}