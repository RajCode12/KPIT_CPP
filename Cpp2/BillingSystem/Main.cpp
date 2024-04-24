#include <iostream>
#include<limits>
#include "Bill.h"
#include "BillNotFoundException.h"
#include "CustomerNotFoundException.h"
// int main()
// {
//     Bill b1 ; 
//     b1.accept(); 
//     std::cout << b1 << std::endl ;
// }
int main()
{
    int  n = 1 ; 
    Bill *b[n];
    // accept input from user
    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter Bill details for "
                  << " Customer  " << i + 1 << " : \n";
        b[i] = new Bill();
        b[i]->accept();
    }
    // display value to user
    for (int i = 0; i < n; i++)
    {
        std::cout << *b[i] ;
    }
    // total Amount
    int totalAmount = 0;
    for (int i = 0; i < n; i++)
    {
        totalAmount += b[i]->getBillAmount();
    }
    // Bill details for UserName
    try
    {
        char *name = new char[20];
        std::cout << "Enter customerName to be found : " << std::endl;
        std::cin >> name;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {          
            if ((*b[i]->getCustomerInfo().getCustomerName()) == *name)
            {
                flag = true;
                std::cout<<*b[i];
                break;
            }
        }
        if (!flag)
        {
            throw CustomerNotFoundException("Customer Not Found...");
        }
    }
    catch (CustomerNotFoundException e)
    {
        std::cout << e.what() << std::endl;
    }
    // Bill details for billNumber
    try
    {
        bool flag = false;
        int number;
        while (true)
        {
            try
            {
                std::cout << "Enter Bill Number : " << std::endl;
                std::cin >> number;
                if (std::cin.fail() || number < 1)
                {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                    throw std::runtime_error("Please Enter a valid number...");
                }
                break;
            }
            catch (std::exception &e)
            {
                std::cout << e.what() << std::endl;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (b[i]->getBillNumber() == number)
            {
                flag = true;
                std::cout << *b[i];
                break;
            }
        }
        if (!flag)
        {
            throw BillNotFoundException("Bill Not Found...");
        }
    }
    catch (BillNotFoundException e)
    {
        std::cout << e.what() << std::endl;
    }
    // clean memory
    for (int i = 0; i < 3; i++)
    {
        delete b[i];
    }
}