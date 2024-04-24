#ifndef ADDRESS_H
#define ADDRESS_H

#include<iostream>
#include<cstring>

class Address {
    std::string city;
    int pincode;
    public:
        Address();
        Address(std::string,int);
        void display();
        ~Address();
};

#endif // ADDRESS_H
