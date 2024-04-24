#include "IndivisualTrip.h"

IndivisualTrip::IndivisualTrip()
{
}

IndivisualTrip::IndivisualTrip(std::string id, std::string name, int dist, int rat, tripVehicleType tp, int duration)
: Trip(id,name,dist,rat,tp), indivisualTripDuration(duration)
{
    
}

float IndivisualTrip::calculateFare(float subcharge)
{
    float fare;
    switch(Trip::getType()) {
        case REGULAR:   
            fare = 25;
            break;
        case PREMIUM:
            fare = 50;
            break;
        default:
            break;
    }
    if(Trip::getTripDistance() >= 20 && indivisualTripDuration >= 30) {
        fare += 1048;
    }
    fare += ((fare*subcharge)/100);
}

float IndivisualTrip::calculateFare()
{
    float fare;
    int cost;
    switch(Trip::getType()) {
        case REGULAR:   
            fare = 25;
            break;
        case PREMIUM:
            fare = 50;
            break;
        default:
            break;
    }
    if(Trip::getTripDistance() >= 20 && indivisualTripDuration >= 30) {
        fare += 590;
    }
    fare -= ((fare*18)/100);
    
    return fare;
}

bool IndivisualTrip::isTripAsPerStandard()
{
    switch(Trip::getType()) {
        case REGULAR:   
            if(Trip::getTripRating() >= 3 && indivisualTripDuration <= 3*Trip::getTripDistance()) {
                return true;
            } else {
                return false;
            }
            break;
        case PREMIUM:
            if(Trip::getTripRating() >= 2 && indivisualTripDuration <= 4*Trip::getTripDistance()) {
                return true;
            } else {
                return false;
            }
            break;
        default:
            break;
    }
    
}
