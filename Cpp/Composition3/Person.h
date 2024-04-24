#ifndef PERSON_H
#define PERSON_H

#include<iostream>
#include<cstring>
#include "Address.h"
#include "Vehicle.h"

class Person {
    std::string name;
    std::string contact;
    std::string email;
    Address address;
    Vehicle vehicle;
    public:
        Person();
        Person(std::string,std::string,std::string,Address,Vehicle);
        ~Person();
        void setPerson();

        std::string getName() const { return name; }
        void setName(const std::string &name_) { name = name_; }

        std::string getContact() const { return contact; }
        void setContact(const std::string &contact_) { contact = contact_; }

        std::string getEmail() const { return email; }
        void setEmail(const std::string &email_) { email = email_; }

        Address getAddress() const { return address; }
        void setAddress(const Address &address_) { address = address_; }

        Vehicle getVehicle() const { return vehicle; }
        void setVehicle(const Vehicle &vehicle_) { vehicle = vehicle_; }
        
        friend std::ostream& operator<<(std::ostream& os, const Person &obj);
};

#endif // PERSON_H
