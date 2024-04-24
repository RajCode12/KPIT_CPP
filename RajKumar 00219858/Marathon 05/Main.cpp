#include<iostream>
#include<cstring>
#include "IndivisualTrip.h"
#include "SharedTrip.h"

int main() {
    std::cout<<"*************Test 1**************"<<std::endl;
    IndivisualTrip i1("101","Raj",29,3,REGULAR,58);
    bool res1 = i1.isTripAsPerStandard();
    if(res1) {
        std::cout<<"Trip is as per standard..."<<std::endl;
    } else {
        std::cout<<"Trip is not as per standard..."<<std::endl;
    }

    std::cout<<"*************Test 2**************"<<std::endl;
    SharedTrip s1("102","Dev",29,3,REGULAR,3);
    bool res2 = s1.isTripAsPerStandard();
    if(res2) {
        std::cout<<"Trip is as per standard..."<<std::endl;
    } else {
        std::cout<<"Trip is not as per standard..."<<std::endl;
    }

    std::cout<<"*************Test 3**************"<<std::endl;
    IndivisualTrip i2("103","Jay",29,3,REGULAR,58);
    float res3 = i2.calculateFare();
    std::cout<<"Total fare : "<<res3<<std::endl;

    std::cout<<"*************Test 4**************"<<std::endl;
    IndivisualTrip i3("104","Rajesh",29,3,REGULAR,58);
    float res4 = i3.calculateFare(12);
    std::cout<<"Total fare : "<<res4<<std::endl;

    std::cout<<"*************Test 5**************"<<std::endl;
    SharedTrip s2("105","Jayesh",29,3,REGULAR,3);
    float res5 = s2.calculateFare();
    std::cout<<"Total fare : "<<res5<<std::endl;
}