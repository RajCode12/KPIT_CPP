#include<iostream>
#include<cstring>
#include "Patient.h"

int main() {
    float f1[3] = {10.7,12.3,15.9};
    Patient p1(101,"Raj",f1);
    
    float f2[3] = {19.7,21.3,9.9};
    Patient p2(102,"Dev",f2);

    //print
    std::cout<<p1;
    std::cout<<"*****************"<<std::endl;
    std::cout<<p2;
    std::cout<<"*****************"<<std::endl;
    
    // ==
    bool res = (p1==p2);
    std::cout<<"P1 == P2 "<<res<<std::endl;

    // []
    std::cout<<p1[0]<<std::endl;
    p2[1] = 'a';
    std::cout<<p2;

    // <
    bool res2 = (p1<p2);
    std::cout<<"P1 < P2 "<<res<<std::endl;
    
    
    
    
}