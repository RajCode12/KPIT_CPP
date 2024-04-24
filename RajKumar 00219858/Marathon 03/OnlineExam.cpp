#include "OnlineExam.h"
#include "Date.h"

OnlineExam::OnlineExam() : exam_platform(Platform::METTL)
{
}

OnlineExam::OnlineExam(Platform platform, int code, Date date) : exam_platform(platform), Exam(code,date)
{
    
}

void OnlineExam::display()
{
    Exam::display();
    switch (exam_platform)
    {
    case SYNAP: 
        std::cout<<"Platform : SYNAP"<<std::endl;
        break;
    case METTL: 
        std::cout<<"Platform : METTL"<<std::endl;
        break;
    default:
        break;
    }
}
