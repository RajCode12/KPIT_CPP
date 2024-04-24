#include<cstring>
class Student {
    int roll;
    char name[20];
    double marks;
    static int count;
    public:
        Student();
        Student(int roll, const char* name, double marks);
        static void display();

        int getRoll() const { return roll; }
        void setRoll(int roll_) { roll = roll_; }

        const char* getName() const { return name; }
        void setName(const char* name_) { strcpy(name,name_); }

        double getMarks() const { return marks; }
        void setMarks(double marks_) { marks = marks_; }
};