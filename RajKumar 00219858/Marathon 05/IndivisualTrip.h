#ifndef INDIVISUALTRIP_H
#define INDIVISUALTRIP_H

#include<iostream>
#include<cstring>
#include "Trip.h"

class IndivisualTrip : public Trip {
    int indivisualTripDuration;
    public:
        IndivisualTrip();
        IndivisualTrip(std::string id, std::string name, int dist, int rat, tripVehicleType tp, int duration);
        float calculateFare();
        float calculateFare(float subcharge);
        bool isTripAsPerStandard();

        int getIndivisualTripDuration() const { return indivisualTripDuration; }
        void setIndivisualTripDuration(int indivisualTripDuration_) { indivisualTripDuration = indivisualTripDuration_; }
        
};

#endif // INDIVISUALTRIP_H
