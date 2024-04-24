#ifndef ADDRESS_H
#define ADDRESS_H

#include<iostream>
#include<cstring>

class Address {
    std::string city;
    int pincode;
    std::string state;
    public:    
        Address();
        Address(std::string, int , std::string);
        ~Address();
        void setAddress();

        std::string getCity() const { return city; }
        void setCity(const std::string &city_) { city = city_; }

        int getPincode() const { return pincode; }
        void setPincode(int pincode_) { pincode = pincode_; }

        std::string getState() const { return state; }
        void setState(const std::string &state_) { state = state_; }
        
        friend std::ostream& operator<<(std::ostream &os, const Address &obj);
};

#endif // ADDRESS_H
