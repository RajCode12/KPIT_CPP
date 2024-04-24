#include "ElectricCar.h"
#include<exception>
#include<limits>

ElectricCar::ElectricCar()
{
}

ElectricCar::~ElectricCar()
{
}

std::ostream &operator<<(std::ostream &os, const ElectricCar &obj)
{
    os<<obj.car;
    os<<"Battery Capacity : "<<obj.batteryCapacity<<std::endl;
    os<<"Time to charge : "<<obj.timeToCharge<<std::endl;
    os<<"Motor Power : "<<obj.motorPower<<std::endl;
    os<<"Max Power : "<<obj.maxPower<<std::endl;
    os<<"Range : "<<obj.range<<std::endl;
    return os;

}

std::istream &operator>>(std::istream &is, ElectricCar &obj)
{
    is>>obj.car;
    while(true) {
        try {
            std::cout<<"Enter Battery Capacity : "<<std::endl;
            int battery;
            is>>battery;
            if(is.fail() || (battery < 0 || battery > 100)) {
                throw std::runtime_error("Please Enter valid battery percentage....");
            }
            obj.setBatteryCapacity(battery);

            std::cout<<"Enter Time to Charge : "<<std::endl;
            float time;
            is>>time;
            if(is.fail() || (time < 0 || time > 10000)) {
                throw std::runtime_error("Please Enter valid battery percentage....");
            }
            obj.setTimeToCharge(time);

            std::cout<<"Enter Motor Power : "<<std::endl;
            float motor;
            is>>motor;
            if(is.fail() || (motor < 0 || motor > 10000)) {
                throw std::runtime_error("Please Enter valid battery percentage....");
            }
            obj.setMotorPower(motor);
        
            std::cout<<"Enter Max Power : "<<std::endl;
            float max;
            is>>max;
            if(is.fail() || (max < 0 || max > 10000)) {
                throw std::runtime_error("Please Enter valid battery percentage....");
            }
            obj.setMaxPower(max);
        
            std::cout<<"Enter Range : "<<std::endl;
            float r;
            is>>r;
            if(is.fail() || (r < 0 || r > 10000)) {
                throw std::runtime_error("Please Enter valid battery percentage....");
            }
            obj.setRange(r);
            break;
        } catch(std::exception &e) {
            std::cout<<e.what()<<std::endl;
            is.fail();
            is.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        }
    }
    return is;
}
