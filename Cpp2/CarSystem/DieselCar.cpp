#include "DieselCar.h"
#include<iostream>
#include<exception>
#include<limits>

DieselCar::DieselCar()
{
}

DieselCar::DieselCar(char * fuel, char * co2)
{
    setRatedFuelConsumption(fuel);
    setRatedCO2Emission(co2);
}

DieselCar::~DieselCar()
{
    delete[] ratedFuelConsumption;
    delete[] ratedCO2Emission;
}

std::ostream &operator<<(std::ostream &os, const DieselCar &obj)
{
    os<<obj.car;
    os<<"Rated Fuel Consumption : "<<obj.ratedFuelConsumption<<std::endl;
    os<<"Rated CO2 Emission : "<<obj.ratedCO2Emission<<std::endl;
    return os;
}

std::istream &operator>>(std::istream &is, DieselCar &obj)
{
    is>>obj.car;
    while(true) {
        try {
            std::cout<<"Enter Rated Fuel Consumption : "<<std::endl;
            char* fuel = new char[20];
            is>>fuel;
            obj.setRatedFuelConsumption(fuel);

            std::cout<<"Enter Rated CO2 Emission : "<<std::endl;
            char* co2 = new char[20];
            is>>co2;
            obj.setRatedCO2Emission(co2);

            delete[] fuel;
            delete[] co2;
            break;
        } catch(std::exception &e) {
            std::cout<<e.what()<<std::endl;
            is.clear();
            is.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        }
    }
    return is;
}
