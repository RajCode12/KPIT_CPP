#include "OfflineExam.h"
#include "Date.h"

OfflineExam::OfflineExam()
{
    
}

OfflineExam::OfflineExam(Address address, int code, Date date) : exam_location(address), Exam(code,date)
{
       
}

void OfflineExam::display()
{
    Exam::display();
    exam_location.display();
}
