#ifndef EXAM_H
#define EXAM_H

#include<iostream>
#include<cstring>
#include "Date.h"

class Exam {
    int exam_code;
    Date exam_date;
    public:
        Exam();
        Exam(int,Date);
        void display();

        int examCode() const { return exam_code; }
        void setExamCode(int examCode) { exam_code = examCode; }

        Date examDate() const { return exam_date; }
        void setExamDate(const Date &examDate) { exam_date = examDate; }

        
};

#endif // EXAM_H
