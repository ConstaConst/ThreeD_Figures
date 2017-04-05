
#include "Sphere.h"


Sphere::Sphere(double radius) :
        radius(radius) {}
Sphere::Sphere(const Sphere & sphere) :
        radius(sphere.radius) {}

Sphere &Sphere::operator=(const Sphere & sphere) {
    radius = sphere.radius;
    return *this;
}

double Sphere::getRadius() const {
    return radius;
}
void Sphere::setRadius(double radius) {
    Sphere::radius = radius;
}

const double Sphere::area() const {
    return 4 * pi * radius * radius;
}
const double Sphere::volume() const {
    return 4 * pi * radius * radius * radius / 3;
}
const char* Sphere::get_type() const {
    return "sphere";
}