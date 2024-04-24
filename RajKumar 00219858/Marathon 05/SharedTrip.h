#ifndef SHAREDTRIP_H
#define SHAREDTRIP_H

#include<iostream>
#include<cstring>
#include "Trip.h"

class SharedTrip : public Trip {
    int sharedTripPassengers;
    public:
        SharedTrip();
        SharedTrip(std::string id, std::string name, int dist, int rat, tripVehicleType tp, int passengers);
        float calculateFare();
        bool isTripAsPerStandard();

        int getSharedTripPassengers() const { return sharedTripPassengers; }
        void setSharedTripPassengers(int sharedTripPassengers_) { sharedTripPassengers = sharedTripPassengers_; }

        
};

#endif // SHAREDTRIP_H
