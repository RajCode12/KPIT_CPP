#include<iostream>
#include "customer.h"

int main() {

    //Customer c1();
    double price[] = {20,40,60};
    Customer *c2 = new Customer(102,"Dev",price);

    //c1.display();
    c2->display();
}