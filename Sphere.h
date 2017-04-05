
#ifndef HW_6_VOLUMS_SPHERE_H
#define HW_6_VOLUMS_SPHERE_H


#include "ThreeD_Figure.h"

class Sphere: public ThreeD_Figure {
public:
    Sphere(double radius);
    Sphere(const Sphere & sphere);

    Sphere &operator=(const Sphere & sphere);

    double getRadius() const;
    void setRadius(double radius);

    const double area() const;
    const double volume() const;
    const char* get_type() const;
private:
    double radius;
    const double pi = 3.14159265;
};


#endif //HW_6_VOLUMS_SPHERE_H
