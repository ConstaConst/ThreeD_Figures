
#ifndef HW_6_VOLUMS_PARALLELEPIPED_H
#define HW_6_VOLUMS_PARALLELEPIPED_H


#include "ThreeD_Figure.h"

class Parallelepiped: public ThreeD_Figure {
public:
    Parallelepiped(double height, double width, double length);
    Parallelepiped(const Parallelepiped & parallelepiped);

    Parallelepiped &operator=(const Parallelepiped & parallelepiped);

    double getHeight() const;
    void setHeight(double height);

    double getWidth() const;
    void setWidth(double width);

    double getLength() const;
    void setLength(double length);

    const double area() const;
    const double volume() const;
    const char* get_type() const;
private:
    double length;
    double width;
    double height;
};


#endif //HW_6_VOLUMS_PARALLELEPIPED_H
