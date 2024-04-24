#include<iostream>
#include<cstring>
#include "Shape.h"
#include "Square.h"
#include "Circle.h"

int main() {
    Square s1(4,"Red");
    s1.area();
    s1.perimeter();
    std::cout<<"*****************"<<std::endl;
    Circle c1(3,"Green");
    c1.area();
    c1.perimeter();
}