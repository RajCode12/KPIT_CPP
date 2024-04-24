#include "Address.h"

Address::Address() : city("pune"), pincode(10011)
{
}

Address::Address(std::string c, int p) : city(c), pincode(p)
{
}

void Address::display() {
    std::cout<<"City : "<<city<<std::endl;
    std::cout<<"Pincode : "<<pincode<<std::endl;
}
