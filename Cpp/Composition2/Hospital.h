#ifndef HOSPITAL_H
#define HOSPITAL_H

#include<iostream>
#include<cstring>
#include "Doctor.h"

class Hospital {
    Doctor doctor;
    std::string hospitalName;
    int numberOfDoctors;
    int numberofRooms;
    int numberOfPatients;
    public:
        Hospital();
        Hospital(std::string,int,int,int);
        Hospital(std::string,int,int,int,Doctor);

        std::string getHospitalName() const { return hospitalName; }
        void setHospitalName(const std::string &hospitalName_) { hospitalName = hospitalName_; }

        int getNumberOfDoctors() const { return numberOfDoctors; }
        void setNumberOfDoctors(int numberOfDoctors_) { numberOfDoctors = numberOfDoctors_; }

        int getNumberofRooms() const { return numberofRooms; }
        void setNumberofRooms(int numberofRooms_) { numberofRooms = numberofRooms_; }

        int getNumberOfPatients() const { return numberOfPatients; }
        void setNumberOfPatients(int numberOfPatients_) { numberOfPatients = numberOfPatients_; }
        //Hospital(const Hospital &obj);
        
        friend std::ostream& operator<<(std::ostream &os, const Hospital &obj);
        //friend std::istream& operator>>(std::istream &is, Hospital &obj);
};

#endif // HOSPITAL_H
