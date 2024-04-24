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

        std::string getCity() const { return city; }
        void setCity(const std::string &city_) { city = city_; }

        int getPincode() const { return pincode; }
        void setPincode(int pincode_) { pincode = pincode_; }
        
};

#endif // ADDRESS_H
