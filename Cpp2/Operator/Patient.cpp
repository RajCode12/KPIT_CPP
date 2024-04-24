#include "Patient.h"

Patient::Patient() : patientNumber(101)
{
    
}

Patient::Patient(const int number, const char * name, float temp_[3])
{
    patientNumber = number;
    patientName = new char[20];
    strcpy(patientName,name);
    setTemp(temp_);
}

Patient::~Patient()
{
    delete[] patientName;
}

float Patient::calculateAverage() const
{
    float res = 0;
    for(int i = 0; i < 3; i++) {
        res += temp[i];
    }
    return res/3;
}

Patient::Patient(const Patient &obj)
{
    patientNumber = obj.patientNumber;
    delete patientName;
    setPatientName(obj.patientName);
    for(int i = 0; i < 3; i++) {
        temp[i] = obj.temp[i];
    }
}

bool Patient::operator==(const Patient &obj)
{
    if(obj.patientName != patientName) {
        return false;
    }
    return true;
}

float &Patient::operator[](int index)
{
    return temp[index];
}

bool Patient::operator<(const Patient &obj)
{
    if(calculateAverage() < obj.calculateAverage()) {
        return true;
    }
    return false;
}

std::ostream &operator<<(std::ostream &os, const Patient &obj)
{
    os<<"Patient Number : "<<obj.getPatientNumber()<<std::endl;
    os<<"Patient Name : "<<obj.getPatientName()<<std::endl;
    for(int i = 0; i < 3; i++) {
        os<<obj.temp[i]<<" ";
    }
    std::cout<<std::endl;
}
