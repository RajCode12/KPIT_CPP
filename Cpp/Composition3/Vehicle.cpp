#include<iostream>
#include<cstring>
#include "Vehicle.h"

Vehicle::Vehicle() {

}
Vehicle::Vehicle(int num, int seats, Date d, std::string m) : 
    vehicleNumber(num), numberOfSeats(seats), mfgDate(d), model(m)
{
    
}
Vehicle::~Vehicle() {

}
void Vehicle::setVehicle()
{
    int num;
    std::cout<<"Enter Vehicle No : ";
    std::cin>>num;
    int seats;
    std::cout<<"Enter number of Seats : ";
    std::cin>>seats;
    std::string m;
    std::cout<<"Enter Model : ";
    std::cin>>m;
    vehicleNumber = num;
    numberOfSeats = seats;
    model = m;
}
std::ostream &operator<<(std::ostream &os, const Vehicle &obj)
{
    os<<"Vehicle Number : "<<obj.vehicleNumber<<std::endl;
    os<<"Number of Seats : "<<obj.numberOfSeats<<std::endl;
    os<<"Model : "<<obj.model<<std::endl;
    std::cout<<obj.mfgDate<<std::endl;
}