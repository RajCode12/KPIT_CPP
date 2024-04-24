#include "Flight.h"
#include<exception>
#include<cstring>
#include<limits>

Flight::Flight()
{
    
}

Flight::Flight(int number, std::string dest, float dis, float f)
{
    flightNumber = number;
    destination = dest;
    distance = dis;
    fuel = f;
}

float Flight::calculateFuelQuantity()
{
    if(distance <= 1000) {
        fuel = 500;
    } else if(distance > 1000 && distance <= 2000) {
        fuel = 1100;
    } else {
        fuel = 2200;
    }
    return fuel;
}

void Flight::feedInfo()
{
    while(true) {
        try {
            std::cout<<"Enter Flight Number : "<<std::endl;
            int number;
            std::cin>>number;
            if(std::cin.fail() || number < 1) {
                throw std::runtime_error("Enter valid flight number...");
            }
            setFlightNumber(number);
            
            std::cout<<"Enter Destination : "<<std::endl;
            std::string dest;
            std::cin>>dest;
            if(std::cin.fail() || dest.empty()) {
                throw std::runtime_error("Enter valid destination...");
            }
            setDestination(dest);

            std::cout<<"Enter Distance : "<<std::endl;
            float dist;
            std::cin>>dist;
            if(std::cin.fail() || dist < 1) {
                throw std::runtime_error("Enter valid distance...");
            }
            setDistance(dist);
            break;
        } catch(std::exception &e) {
            std::cout<<e.what()<<std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        }
    }
}

void Flight::showInfo()
{
    std::cout<<"Flight Number : "<<flightNumber<<std::endl;
    std::cout<<"Destination : "<<destination<<std::endl;
    std::cout<<"Distance : "<<distance<<std::endl;
    std::cout<<"Fuel Used : "<<calculateFuelQuantity()<<std::endl;
}
