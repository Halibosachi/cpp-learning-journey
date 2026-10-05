#include <iostream>
#include <stdexcept>
#include "Circle.h"

int main() {
    Circle c1(5.0);
    std::cout << "Radius: " << c1.getRadius() << "\n";
    std::cout << "Area: " << c1.area() << "\n";
    std::cout << "Circumference: " << c1.circumference() << "\n";
    
    try
    {
        Circle c2(-5.0);
        std::cout << "This line will never print!\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << "Caught an exception: " << e.what() << '\n';
    }
    
    
    return 0;
}