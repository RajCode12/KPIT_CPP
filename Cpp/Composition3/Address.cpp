#include<iostream>
#include "Address.h"

Address::Address() {
    
}
Address::Address(std::string c, int p, std::string s) : city(c), pincode(p), state(s) {
    
}
void Address::setAddress()
{
    std::string c;
    std::cout<<"Enter city : ";
    std::cin>>c;
    std::string s;
    std::cout<<"Enter state : ";
    std::cin>>s;
    int p;
    std::cout<<"Enter Pincode : ";
    std::cin>>p;
    city = c;
    pincode = p;
    state = s;
}
Address::~Address() {}

std::ostream& operator<<(std::ostream &os, const Address &obj) {
    os<<"City : "<<obj.city<<std::endl;
    os<<"Pincode : "<<obj.pincode<<std::endl;
    os<<"State : "<<obj.state<<std::endl;
}
