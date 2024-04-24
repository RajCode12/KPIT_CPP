#include<iostream>
#include<cstring>
#include "customer.h"


Customer::Customer() {
    // id = 101;
    // name = new char[20];
    // strcpy(name,"Raj");
    // itemPrice[3] = {10,20,30};
}
Customer::Customer(int id, const char* name, const double* itemPrice) {
    this->id = id;
    this->name = new char[strlen(name)+1];
    strcpy(this->name,name);
    for(int i = 0; i < 3; i++) {
        this->itemPrice[i] = itemPrice[i];
    }
}
void Customer::display() {
    std::cout<<id<<" "<<name<<std::endl;
    for(int i = 0; i < 3; i++) {
        std::cout<<itemPrice[i]<<" "<<std::endl;
    }
}