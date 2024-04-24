#include "Trip.h"

Trip::Trip() : tripId("101"), tripDriver("Raj"), tripDistance(100), tripRating(5), type(tripVehicleType::REGULAR)
{
}

float Trip::calculateFare()
{
    
}

Trip::Trip(std::string id, std::string name, int dist, int rating, tripVehicleType tp) 
    : tripId(id), tripDriver(name), tripDistance(dist), tripRating(rating), type(tp)
{
    
}
