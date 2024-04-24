#include "complex.h"
#include<iostream>
#include<cstring>

Complex::Complex()
{

}

Complex::Complex(int r, int i) : real(r), img(i)
{

}

//member initializer list
//Note: pointer should always be inside body only otherwise it will copy address
Complex::Complex(int r, int i, const char* name) : real(r), img(i) 
{
    name = new char[10];
    strcpy(this->name,name);
}
bool Complex::operator==(const Complex &c2) {
    if(real==c2.real && img==c2.img) {
        return true;
    } else {
        return false;
    }
}

Complex Complex::operator+(const Complex &c2)
{
    Complex obj;
    obj.setReal(c2.real+real);
    obj.setImg(c2.img+img);
    return obj;
}
Complex Complex::operator-(const Complex &c2)
{
    Complex obj;
    obj.setReal(c2.real-real);
    obj.setImg(c2.img-img);
    return obj;
}
Complex Complex::operator-() 
{
    Complex obj;
    obj.setReal(-real);
    obj.setImg(-img);
    return obj;
}
Complex& Complex::operator++()  //returning using reference
{
    //Complex obj;
    ++real;
    ++img;
    //return obj;
    return *this;      // actually returning object 
}
Complex Complex::operator++(int)   // int is added to indicate that it is post increement
{
    Complex obj = *this;
    real++;
    img++;
    return obj;
}
void Complex::display()
{
    std::cout<<real<<" "<<img<<std::endl;
}

void operator<<(std::ostream &os, const Complex &obj)
{
    os<<obj.real<<" "<<obj.img<<" "<<std::endl;
}

void operator>>(std::istream &is, const Complex &obj)
{

}
