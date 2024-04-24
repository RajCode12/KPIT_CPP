#include<iostream>
#include<cstring>
#include "Exam.h"
#include "Address.h"

enum Platform{SYNAP=1,METTL};

class OnlineExam : public Exam{
    Platform exam_platform;
    //Exam exam1;
    public:
        OnlineExam();
        OnlineExam(Platform,int,Date);
        void display();

        Platform examPlatform() const { return exam_platform; }
        void setExamPlatform(Platform &examPlatform) { exam_platform = examPlatform; }

        
};