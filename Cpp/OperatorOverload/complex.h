#ifndef COMPLEX_H
#define COMPLEX_H

#include<cstring>
#include<iostream>

class Complex {
    int real;
    int img;
    char* name;
    public:
        //constructor overloading
        Complex();
        Complex(int real, int img);
        Complex(int real, int img, const char* name);

        // << and >> are binary operator 
        friend void operator<<(std::ostream &os, const Complex &obj);
        friend void operator>>(std::istream &is, const Complex &obj);
        
        //operator overloading
        bool operator==(const Complex &c2);
        Complex operator+(const Complex &c2);
        Complex operator-(const Complex &c2);
        Complex operator-();
        Complex& operator++();
        Complex operator++(int);
        void display();

        int getReal() const { return real; }
        void setReal(int real_) { real = real_; }       

        int getImg() const { return img; }
        void setImg(int img_) { img = img_; }

        const char* getName() const { return name; }
        void setName(const char* name_) { strcpy(name,name_); }
        
};

#endif // COMPLEX_H
