#ifndef PAIR_H
#define PAIR_H

#include<iostream>
#include<cstring>

class Pair {
    private:
        int a;
        int b;
    public:
        Pair();
        Pair(int , int);
        void display();
        Pair operator+(const Pair &obj);
        Pair operator-(const Pair &obj);
        bool operator==(const Pair &obj);
        bool operator!=(const Pair &obj);
        Pair operator-();
        Pair& operator++();//pre-increment
        Pair operator++(int);//post-increment
        //we cannot overload the method from the ostream class 
        // thats why we make operator<< as friend of the ostream class
        friend std::ostream& operator<<(std::ostream &cout, const Pair &obj);//output
        friend std::istream& operator>>(std::istream &cin, Pair &obj);//input

        int getA() const { return a; }
        void setA(int a_) { a = a_; }

        int getB() const { return b; }
        void setB(int b_) { b = b_; }
        
};

#endif // PAIR_H
