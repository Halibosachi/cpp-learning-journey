#include "Circle.h"
#include <stdexcept>
#include <iostream>

Circle::Circle(double r) {
    setRadius(r);
}

double Circle::getRadius() const{
    return radius;
}

void Circle::setRadius(double r){
    if(r < 0.0){
        throw std::invalid_argument("Radius cannot be negative!");
    }
    radius = r;
}

double Circle::area() const{
    return PI * radius * radius;
}

double Circle::circumference() const{
    return 2 * PI * radius;
}

