#include<iostream>
#include<cstring>
#include "Square.h"
#include "Circle.h"

Circle::Circle() : radius(1)
{
}

Circle::Circle(double r, std::string c) : radius(r), Shape(c)
{
}

void Circle::area()
{
    std::cout<<"Area of Circle : "<<3.14*radius*radius<<std::endl;
    Shape::display();
}

void Circle::perimeter()
{
    std::cout<<"Perimeter of Circle : "<<2*3.14*radius<<std::endl;
    Shape::display();
}
