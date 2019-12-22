#define CATCH_CONFIG_MAIN
#include "./catch.hpp"
#include "../include/Point.hpp"
#include "../include/Ray.hpp"
#include "../include/Sphere.hpp"

TEST_CASE("Basic arithmetic operations succeeded", "[arithmetics]") {
  Point p(1, 4, 7);
  Point q(3, 2, 1);

  Point r = p + q;
  Point s = p - q;
  Point t = p.mult(2);
  Point u = p * q;

  REQUIRE(r.x == 4);
  REQUIRE(r.y == 6);
  REQUIRE(r.z == 8);

  REQUIRE(s.x == -2);
  REQUIRE(s.y == 2);
  REQUIRE(s.z == 6);

  REQUIRE(t.x == 2);
  REQUIRE(t.y == 8);
  REQUIRE(t.z == 14);

  REQUIRE(u.x == 3);
  REQUIRE(u.y == 8);
  REQUIRE(u.z == 7);
}

TEST_CASE("Vector operations succeeded", "[vectors]") {
  Point p(1, 4, 7);
  Point q(3, 2, 1);

  Point r = p.norm();
  double s = p.dot(q);
  Point t = p.cross(q);

  REQUIRE(r.x == 1 / sqrt(66));
  REQUIRE(r.y == 4 / sqrt(66));
  REQUIRE(r.z == 7 / sqrt(66));

  REQUIRE(s == 18);

  REQUIRE(t.x == -10);
  REQUIRE(t.y == 20);
  REQUIRE(t.z == -10);
}

TEST_CASE("Ray testing succeeded", "[rays]") {
  Ray r(Point(10, 5, 1), Point(2, 4, 6));

  REQUIRE(r.origin.x == 10);
  REQUIRE(r.origin.y == 5);
  REQUIRE(r.origin.z == 1);

  REQUIRE(r.destination.x == 2);
  REQUIRE(r.destination.y == 4);
  REQUIRE(r.destination.z == 6);
}

TEST_CASE("Sphere testing succeeded", "[spheres]") {
  Sphere s(Point(10, 0, 0), 5, Material::DIFFUSE, Point(255, 0, 0));
  Ray r(Point(0, 0, 0), Point(1, 0, 0));
  Ray w(Point(0, 0, 0), Point(0, 1, 0));

  REQUIRE(s.getIntersect(r) == 5);
  REQUIRE(s.getIntersect(w) == -1);
}