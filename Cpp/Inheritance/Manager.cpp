#include<iostream>
#include<cstring>
#include "Manager.h"

Manager::Manager() {
    std::cout<<"Manager ctor..."<<std::endl;
}
Manager::Manager(int num, int inc) : numberOfSubordinates(num), incrementPerSub(inc){

}
Manager::~Manager() {
    
}

void Manager::Incentive()
{
    std::cout<<"In Manager fun..."<<std::endl;
}
