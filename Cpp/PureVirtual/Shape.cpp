#include<iostream>
#include<cstring>
#include "Shape.h"

Shape::Shape() : color("Red")
{
}

Shape::Shape(std::string c) : color(c)
{  
}

Shape::~Shape()
{
    std::cout<<"Shape dtor..."<<std::endl;
}

void Shape::display()
{
    std::cout<<"Color : "<<color<<std::endl;
}
