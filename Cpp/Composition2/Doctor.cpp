#include<iostream>
#include<cstring>
#include "Doctor.h"

Doctor::Doctor() {
    int id;
    std::cout<<"Enter Id : ";
    std::cin>>id;
    std::string name;
    std::cout<<"Enter Doctor Name : ";
    std::cin>>name;
    //setting values
    this->doctorId = id;
    this->doctorName = name;
}
Doctor::Doctor(int id,std::string name) : doctorId(id), doctorName(name) {}
Doctor::Doctor(int id,std::string name, Date date) :  doctorId(id), doctorName(name), joiningDate(date)
{
    
}
void operator<<(std::ostream &os, const Doctor &obj)
{
    os<<"Doctor Id : "<<obj.doctorId<<std::endl;
    os<<"Doctor Name : "<<obj.doctorName<<std::endl;
    std::cout<<obj.joiningDate;
}