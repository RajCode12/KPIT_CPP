#include "Vehicle.h"
#include<iostream>
#include<cstring>
#include <exception>
#include<limits>

int Vehicle::totalVehicles = 0;

Vehicle::Vehicle() : vType(vehicleType::TWOWH), parkingHours(5), parkingId(1)
{
    totalVehicles++;
    strcpy(vehicleNumber,"BR2033");
}

Vehicle::~Vehicle()
{
    delete[] vehicleNumber;
}

Vehicle::Vehicle(const Vehicle &obj) : vType(obj.vType), parkingHours(obj.parkingHours), parkingId(obj.parkingId)
{
    delete[] vehicleNumber;
    setVehicleNumber(obj.vehicleNumber);
}

int Vehicle::numberOfVehicles()
{
    return totalVehicles;
}

std::ostream &operator<<(std::ostream &os, const Vehicle &obj)
{
    os<<"Vehicle Number : "<<obj.getVehicleNumber()<<std::endl;
    os<<"Parking Id : "<<obj.getParkingId()<<std::endl;
    os<<"Parking Hours : "<<obj.getParkingHours()<<std::endl;
    switch (obj.getVType())
    {
    case TWOWH: os<<"Vehicle is Two Wheeler..."<<std::endl;
        break;
    case FOURWH: os<<"Vehicle is Four Wheeler..."<<std::endl;
        break;
    default:
        break;
    }
    return os;
}

bool alphaNumeric(char* number) {
    int n = strlen(number);
    for(int i = 0; i < n; i++) {
        if(!((number[i] >= '0' && number[i] <= '9') || (number[i] >= 'A' && number[i] <= 'Z') || 
            (number[i] >= 'a' && number[i] <= 'z'))) {
                return false;
            }
    }
    return true;
}

std::istream &operator>>(std::istream &is, Vehicle &obj)
{
    while(true) {
        try {
            std::cout<<"Enter Vehicle Number : "<<std::endl;
            char* number = new char[10];
            is>>number;
            if(is.fail() || !alphaNumeric(number)) {
                throw std::runtime_error("Enter valid vehicle number...");
            }
            obj.setVehicleNumber(number);

            std::cout<<"Enter Vehicle Type : "<<std::endl;
            std::cout<<"1 -> Two Wheeler | 2 -> Four Wheeler : "<<std::endl;
            int n;
            is>>n;
            if(is.fail() || (n != 1 && n != 2)) {
                throw std::runtime_error("Invalid input.... Try Again....");
            }
            switch(n)
            {
            case TWOWH:  obj.setVType(TWOWH); break;
            case FOURWH: obj.setVType(FOURWH); break;
            default:  break;
            }
            
            std::cout<<"Enter Parking Id : "<<std::endl;
            int id;
            is>>id;
            if(is.fail() || id < 1) {
                throw std::runtime_error("Please enter valid parking id...");
            }
            obj.setParkingId(id);

            std::cout<<"Enter Parking Hours : "<<std::endl;
            int hours;
            is>>hours;
            if(is.fail() || hours < 1) {
                throw std::runtime_error("Please enter valid parking hours...");
            }
            obj.setParkingHours(hours);

            break;
        } catch(std::exception &e) {
            std::cout<<e.what()<<std::endl;
            is.clear();
            is.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        }
    }
    return is;
}
