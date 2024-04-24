#include<iostream>
#include<cstring>
#include "Square.h"

Square::Square() : side(1)
{
}

Square::Square(int s, std::string c) : side(s) , Shape(c)
{
}

void Square::area()
{
    std::cout<<"Area of Square : "<<side*side<<std::endl;
    Shape::display();
}

void Square::perimeter()
{
    std::cout<<"Perimeter of Square : "<<4*side<<std::endl;
     Shape::display();
}
