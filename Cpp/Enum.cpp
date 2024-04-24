#include<iostream>
#include<string>

enum carType{SUV,SEDAN,SPORTS}; // automatic increse by +1

//enum carType{Burger=1,Pizza};

class Car {
    int price;
    enum carType ctype;
    public:
        Car() : price(100000), ctype(carType::SPORTS){}
        Car(int p, carType c) : price(p) , ctype(c) {}
        void display() {
            std::cout<<price<<" "<<ctype<<std::endl;
        
            switch(ctype)
            {
                case 0: std::cout<<"SUV";break;
                case 1: std::cout<<"SEDAN";break;
                case 2: std::cout<<"SPORTS";break;
                default:break;
            }
        }
};

int main() {
    Car carObj;
    int n;
    std::cout<<"Enter number : 1 for SUV, 2 for SEDAN, 3 for SPORTS : "<<std::endl;
    std::cin>>n;
    carType type;
    switch(n-1) {
        case 0: type = carType::SUV; break;
        case 1: type = carType::SEDAN; break;
        case 2: type = carType::SPORTS; break;
        default: break;
    }
    Car c1(100000,type);
    c1.display();
}
