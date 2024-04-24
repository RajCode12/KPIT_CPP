#ifndef CUSTOMER_H
#define CUSTOMER_H

#include<iostream>
#include<cstring>

class Customer {
    char* customerName;
    public:
        Customer();
        Customer(const char* name);
        Customer(const Customer &obj);
        void accept();
        ~Customer();

        char* getCustomerName() const { return customerName; }
        void setCustomerName(const char* customerName_) { 
            customerName = new char[20];
            strcpy(customerName,customerName_);
         }

        friend std::ostream& operator<<(std::ostream &os, const Customer &obj);
        
};

#endif // CUSTOMER_H
