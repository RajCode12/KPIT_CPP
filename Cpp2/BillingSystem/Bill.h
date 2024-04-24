#ifndef BILL_H
#define BILL_H

#include<iostream>
#include<cstring>
#include "Customer.h"
#include "Date.h"

class Bill {
    int billNumber;
    Customer customerInfo;
    Date billDate;
    int billAmount;
    public:
        Bill();
        ~Bill();
        void accept();

        int getBillNumber() const { return billNumber; }
        void setBillNumber(int billNumber_) { billNumber = billNumber_; }

        Customer getCustomerInfo() const { return customerInfo; }
        void setCustomerInfo(const Customer &customerInfo_) { customerInfo = customerInfo_; }

        Date getBillDate() const { return billDate; }
        void setBillDate(const Date &billDate_) { billDate = billDate_; }

        int getBillAmount() const { return billAmount; }
        void setBillAmount(int billAmount_) { billAmount = billAmount_; }
        
        friend std::ostream& operator<<(std::ostream &os, const Bill &obj);
        
};

#endif // BILL_H
