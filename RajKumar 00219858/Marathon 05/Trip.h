#ifndef TRIP_H
#define TRIP_H

#include<iostream>
#include<cstring>

enum tripVehicleType{REGULAR=1,PREMIUM};

class Trip {
    std::string tripId;
    std::string tripDriver;
    int tripDistance;
    int tripRating;
    tripVehicleType type;
    public:
        Trip();
        Trip(std::string,std::string,int,int,tripVehicleType);
        virtual float calculateFare()=0;

        std::string getTripId() const { return tripId; }
        void setTripId(const std::string &tripId_) { tripId = tripId_; }

        std::string getTripDriver() const { return tripDriver; }
        void setTripDriver(const std::string &tripDriver_) { tripDriver = tripDriver_; }

        int getTripDistance() const { return tripDistance; }
        void setTripDistance(int tripDistance_) { tripDistance = tripDistance_; }

        int getTripRating() const { return tripRating; }
        void setTripRating(int tripRating_) { tripRating = tripRating_; }

        tripVehicleType getType() const { return type; }
        void setType(const tripVehicleType &type_) { type = type_; }
        
};

#endif // TRIP_H
