#ifndef FLIGHT_H
#define FLIGHT_H

#include<iostream>
#include<cstring>

class Flight {
    int flightNumber;
    std::string destination;
    float distance;
    float fuel;
    public: 
        Flight();
        Flight(int,std::string,float,float);
        float calculateFuelQuantity();
        void feedInfo();
        void showInfo();

        int getFlightNumber() const { return flightNumber; }
        void setFlightNumber(int flightNumber_) { flightNumber = flightNumber_; }

        std::string getDestination() const { return destination; }
        void setDestination(const std::string &destination_) { destination = destination_; }

        float getDistance() const { return distance; }
        void setDistance(float distance_) { distance = distance_; }

        float getFuel() const { return fuel; }
        void setFuel(float fuel_) { fuel = fuel_; }
};

#endif // FLIGHT_H
