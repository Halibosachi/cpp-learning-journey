#ifndef CIRCLE_H
#define CIRCLE_H

const double PI = 3.141592;

class Circle {
    private:
        double radius;
    
    public:
        Circle(double r = 0.0);
        
        double getRadius() const;
        void setRadius(double r);
        double area() const;
        double circumference() const;

};

#endif