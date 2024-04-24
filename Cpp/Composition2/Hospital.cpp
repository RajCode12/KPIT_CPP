#include<cstring>
#include<iostream>
#include "Hospital.h"

Hospital::Hospital() {
    std::string name;
    int d;
    int r;
    int p;
    std::cout<<"Enter Hospital Details : ";
    std::cin>>name>>d>>r>>p;
    this->hospitalName = name;
    this->numberOfDoctors = d;
    this->numberofRooms = r;
    this->numberOfPatients = p;
}
Hospital::Hospital(std::string n, int d, int r, int p) :
    hospitalName(n), numberOfDoctors(d), numberofRooms(r), numberOfPatients(p) {}

Hospital::Hospital(std::string name, int d, int r, int p, Doctor doc) : 
hospitalName(name), numberOfDoctors(d), numberofRooms(r), numberOfPatients(p), doctor(doc)
{
    
}

// Hospital::Hospital(const Hospital &obj)
// {
    
// }

std::ostream& operator<<(std::ostream &os, const Hospital &obj)
{
    os<<"Hospital Name : "<<obj.hospitalName<<std::endl;
    os<<"Number of Doctors : "<<obj.numberOfDoctors<<std::endl;
    os<<"Number of Rooms : "<<obj.numberofRooms<<std::endl;
    os<<"Number of Patients : "<<obj.numberOfPatients<<std::endl;
    std::cout<<obj.doctor;
}

// std::istream &operator>>(std::istream &is, Hospital &obj)
// {
    
// }
