#include<iostream>
#include<cstring>
#include "Address.h"

Address::Address() : city("Pune"), pincode(10001){
    
}
Address::Address(std::string c, int p) : city(c), pincode(p) {
    
}
void Address::display() {
    std::cout<<city<<" "<<pincode<<std::endl;
}
Address::~Address() {
    std::cout<<"address ctor..."<<std::endl;
}