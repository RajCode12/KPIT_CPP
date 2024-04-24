#include<iostream>

class Sum {
    public:
    // static void add(int a, int b) {
    //     std::cout<<a+b<<std::endl;
    // }
    static void add(float a, float b) {
        std::cout<<a+b<<std::endl;
    }
    static void add(int a, int b, int c=0, int d=0) {   //single add for two to four numbers 
        std::cout<<a+b+c+d<<std::endl;
    }

    protected:
        display() {
            std::cout<<"Adding the numbers..."<<std::endl; // not accessible outside the class
        }
};
int main() {
    Sum s;
    s.display();
    Sum::add(2.3f,4.7f);
    Sum::add(1,2);
    Sum::add(1,2,3);
    Sum::add(1,2,3,4);
}