#ifndef SHAPE_H
#define SHAPE_H

#include<iostream>
#include<cstring>

class Shape {
    std::string color;
    public:
        Shape();
        Shape(std::string);
        ~Shape();
        virtual void display();//virtual
        virtual void area() = 0;//pure-virtual
        virtual void perimeter() = 0;

        std::string getColor() const { return color; }
        void setColor(const std::string &color_) { color = color_; }
};

#endif // SHAPE_H
