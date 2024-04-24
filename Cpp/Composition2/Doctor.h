#ifndef DOCTOR_H
#define DOCTOR_H

#include<iostream>
#include<cstring>
#include "Date.h"

class Doctor {
    Date joiningDate;
    int doctorId;
    std::string doctorName;
    public:
        Doctor();
        Doctor(int,std::string);
        Doctor(int,std::string,Date);

        Date getJoiningDate() const { return joiningDate; }
        void setJoiningDate(const Date &joiningDate_) { joiningDate = joiningDate_; }

        int getDoctorId() const { return doctorId; }
        void setDoctorId(int doctorId_) { doctorId = doctorId_; }

        std::string getDoctorName() const { return doctorName; }
        void setDoctorName(const std::string &doctorName_) { doctorName = doctorName_; }

        friend void operator<<(std::ostream &os, const Doctor &obj);
};

#endif // DOCTOR_H
