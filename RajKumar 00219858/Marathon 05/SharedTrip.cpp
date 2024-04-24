#include "SharedTrip.h"

SharedTrip::SharedTrip()
{
}

SharedTrip::SharedTrip(std::string id, std::string name, int dist, int rat, tripVehicleType tp, int passengers)
 : Trip(id,name,dist,rat,tp), sharedTripPassengers(passengers)
{
}

float SharedTrip::calculateFare()
{
    float fare;
    int number;
    switch(Trip::getType()) {
        case REGULAR:   
            fare = 25;
            number = 5;
            break;
        case PREMIUM:
            fare = 50;
            number = 20;
            break;
        default:
            break;
    }
    fare += (Trip::getTripDistance()*fare + sharedTripPassengers*number);
    return fare;
}

bool SharedTrip::isTripAsPerStandard()
{
    float fare;
    switch(Trip::getType()) {
        case REGULAR:   
            if(Trip::getTripRating() >= 3) {
                return true;
            } else {
                return false;
            }
            break;
        case PREMIUM:
            if(Trip::getTripRating() >= 4) {
                return true;
            } else {
                return false;
            }
            break;
        default:
            break;
    }
}
