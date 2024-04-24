#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H

#include<iostream>
#include<cstring>
#include "CarSpecification.h"

class ElectricCar : public CarSpecification {
    int batteryCapacity;
    float timeToCharge;
    float motorPower;
    float maxPower;
    float range;
    CarSpecification car;
    public:
        ElectricCar();
        ~ElectricCar();

        friend std::ostream& operator<<(std::ostream &os, const ElectricCar &obj);
        friend std::istream& operator>>(std::istream &is, ElectricCar &obj);

        int getBatteryCapacity() const { return batteryCapacity; }
        void setBatteryCapacity(int batteryCapacity_) { batteryCapacity = batteryCapacity_; }

        float getTimeToCharge() const { return timeToCharge; }
        void setTimeToCharge(float timeToCharge_) { timeToCharge = timeToCharge_; }

        float getMotorPower() const { return motorPower; }
        void setMotorPower(float motorPower_) { motorPower = motorPower_; }

        float getMaxPower() const { return maxPower; }
        void setMaxPower(float maxPower_) { maxPower = maxPower_; }

        float getRange() const { return range; }
        void setRange(float range_) { range = range_; }
        
};

#endif // ELECTRICCAR_H
