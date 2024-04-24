#ifndef DIESELCAR_H
#define DIESELCAR_H

#include<iostream>
#include<cstring>
#include "CarSpecification.h"

class DieselCar : public CarSpecification {
    char* ratedFuelConsumption;
    char* ratedCO2Emission;
    CarSpecification car;
    public:
        DieselCar();
        DieselCar(char* , char*);
        ~DieselCar();

        char* getRatedFuelConsumption() const { return ratedFuelConsumption; }
        void setRatedFuelConsumption(char* ratedFuelConsumption_) { 
            ratedFuelConsumption = new char[30];
            strcpy(ratedFuelConsumption,ratedFuelConsumption_); 
        }

        char* getRatedCO2Emission() const { return ratedCO2Emission; }
        void setRatedCO2Emission(char* ratedCO2Emission_) { 
            strcpy(ratedCO2Emission,ratedCO2Emission_); 
        }
        
        friend std::ostream& operator<<(std::ostream &os, const DieselCar &obj);
        friend std::istream& operator>>(std::istream &is, DieselCar &obj);
};

#endif // DIESELCAR_H
