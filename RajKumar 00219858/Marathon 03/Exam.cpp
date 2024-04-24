#include "Exam.h"

Exam::Exam() : exam_code(101)
{
    
}

Exam::Exam(int code, Date date) : exam_code(code), exam_date(date)
{
}

void Exam::display()
{
    std::cout<<"Exam Code : "<<exam_code<<std::endl;
    std::cout<<exam_date;
}
