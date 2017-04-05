
#include "Parallelepiped.h"

Parallelepiped::Parallelepiped(double height, double width, double length) :
        height(height),
        width(width),
        length(length) {}
Parallelepiped::Parallelepiped(const Parallelepiped & parallelepiped) :
        height(parallelepiped.height),
        width(parallelepiped.width),
        length(parallelepiped.length) {}

Parallelepiped &Parallelepiped::operator=(const Parallelepiped & parallelepiped) {
    height = parallelepiped.height;
    width = parallelepiped.width;
    length = parallelepiped.length;
    return *this;
}

double Parallelepiped::getHeight() const {
    return height;
}
void Parallelepiped::setHeight(double height) {
    Parallelepiped::height = height;
}

double Parallelepiped::getLength() const {
    return length;
}
void Parallelepiped::setLength(double length) {
    Parallelepiped::length = length;
}

double Parallelepiped::getWidth() const {
    return width;
}
void Parallelepiped::setWidth(double width) {
    Parallelepiped::width = width;
}

const double Parallelepiped::area() const {
    return 2 * (height * width + height * length + width * length);
}
const double Parallelepiped::volume() const {
    return height * width * length;
}
const char* Parallelepiped::get_type() const {
    return "parallelepiped";
}


