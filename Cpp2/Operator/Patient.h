#ifndef PATIENT_H
#define PATIENT_H

#include<iostream>
#include<cstring>

class Patient {
    int patientNumber;
    char* patientName;
    float temp[3];
    public:
        Patient();
        Patient(const int,const char* , float temp[3]);
        ~Patient();
        float calculateAverage() const;
        Patient(const Patient &);
        
        bool operator==(const Patient &);
        float &operator[](int);
        bool operator<(const Patient &);

        int getPatientNumber() const { return patientNumber; }
        void setPatientNumber(int patientNumber_) { patientNumber = patientNumber_; }

        const char* getPatientName() const { return patientName; }
        void setPatientName(const char* patientName_) { strcpy(patientName,patientName_); }

        const float* getTemp() const { return temp; }
        void setTemp(float temp_[3]) { 
            for(int i = 0; i < 3; i++) {
                temp[i] = temp_[i];
            }
         }
        
        friend std::ostream& operator<<(std::ostream &os, const Patient &obj);
};

#endif // PATIENT_H
