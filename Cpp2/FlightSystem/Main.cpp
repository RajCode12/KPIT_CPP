#include<iostream>
#include<cstring>
#include<exception>
#include<limits>
#include "Flight.h"

int main() {
    Flight f;
    f.feedInfo();
    std::cout<<"*******************"<<std::endl;
    f.showInfo();
}