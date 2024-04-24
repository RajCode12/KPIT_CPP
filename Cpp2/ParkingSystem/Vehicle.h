#ifndef VEHICLE_H
#define VEHICLE_H

#include<iostream>
#include<cstring>

enum vehicleType{ TWOWH=1, FOURWH};

class Vehicle {
    char* vehicleNumber;
    vehicleType vType;
    int parkingHours;
    int parkingId;
    static int totalVehicles;
    public:
        Vehicle();
        ~Vehicle();
        Vehicle(const Vehicle &);
        
        static int numberOfVehicles();

        const char* getVehicleNumber() const { return vehicleNumber; }
        void setVehicleNumber(const char* vehicleNumber_) { 
            vehicleNumber = new char[10];
            strcpy(vehicleNumber,vehicleNumber_);
        }

        vehicleType getVType() const { return vType; }
        void setVType(const vehicleType &vType_) { vType = vType_; }

        int getParkingHours() const { return parkingHours; }
        void setParkingHours(int parkingHours_) { parkingHours = parkingHours_; }

        int getParkingId() const { return parkingId; }
        void setParkingId(int parkingId_) { parkingId = parkingId_; }
        
        friend std::ostream& operator<<(std::ostream &os, const Vehicle &obj);
        friend std::istream& operator>>(std::istream &is, Vehicle &obj);
};

#endif // VEHICLE_H
