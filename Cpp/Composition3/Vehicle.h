#include<iostream>
#include<cstring>
#include "Date.h"

class Vehicle {
    int vehicleNumber;
    int numberOfSeats;
    Date mfgDate;
    std::string model;
    public:     
        Vehicle();
        Vehicle(int,int,Date,std::string);
        ~Vehicle();
        void setVehicle();
        int getVehicleNumber() const { return vehicleNumber; }
        void setVehicleNumber(int vehicleNumber_) { vehicleNumber = vehicleNumber_; }
        int getNumberOfSeats() const { return numberOfSeats; }
        void setNumberOfSeats(int numberOfSeats_) { numberOfSeats = numberOfSeats_; }
        std::string getModel() const { return model; }
        void setModel(const std::string &model_) { model = model_; }
        Date getMfgDate() const { return mfgDate; }
        void setMfgDate(const Date &mfgDate_) { mfgDate = mfgDate_; }
        friend std::ostream& operator<<(std::ostream &os, const Vehicle &obj);
};