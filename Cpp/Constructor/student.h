#include<cstring>

class Student {
    int roll;
    char name[20];
    double marks[3];
    public:
        Student();
        Student(int roll,const char* name,double marks[3]);
        double getAverage();

        int getRoll() const { return roll; }
        void setRoll(int roll_) { roll = roll_; }

        const char* getName() const { return name; }
        void setName(const char* name_) { strcpy(name,name_); }

        const double* getMarks() const { return marks; }
        void setMarks(double marks_[3]) { 
            for(int i = 0; i < 3; i++) {
                this->marks[i] = marks[i];
            }
        }  
};