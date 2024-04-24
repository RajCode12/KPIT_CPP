#ifndef CIRCLE_H
#define CIRCLE_H

#include<iostream>
#include<cstring>
#include "Shape.h"

class Circle : public Shape { //Inheritance now, its mandatory to override function of parent class as 
//method written inside it are pure virtual function
    double radius;
    public:
        Circle();
        Circle(double,std::string);
        void area();
        void perimeter();

        double getRadius() const { return radius; }
        void setRadius(double radius_) { radius = radius_; }
      
};

#endif // CIRCLE_H
