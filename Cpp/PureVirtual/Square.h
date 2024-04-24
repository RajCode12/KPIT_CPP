#ifndef SQUARE_H
#define SQUARE_H

#include<iostream>
#include<cstring>
#include "Shape.h"

class Square : public Shape {
    int side;
    public:
        Square();
        Square(int,std::string);
        void area();
        void perimeter();

        int getSide() const { return side; }
        void setSide(int side_) { side = side_; }
};

#endif // SQUARE_H
