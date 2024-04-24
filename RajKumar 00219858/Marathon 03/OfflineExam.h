#ifndef OFFLINEEXAM_H
#define OFFLINEEXAM_H

#include<iostream>
#include<cstring>
#include "Exam.h"
#include "Address.h"

class OfflineExam : public Exam{
    Address exam_location;
    //Exam
    public:
        OfflineExam();
        OfflineExam(Address,int,Date);
        void display();

        Address examLocation() const { return exam_location; }
        void setExamLocation(const Address &examLocation) { exam_location = examLocation; }

        
};

#endif // OFFLINEEXAM_H
