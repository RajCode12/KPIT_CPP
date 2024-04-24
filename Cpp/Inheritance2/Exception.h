#include<iostream>
#include<exception>

class LowBalanceException : public std::exception {
    std::string err;
    public:
        LowBalanceException() {};
        LowBalanceException(std::string message) {
            err = message;
        }
        const std::string what() {
            return err;
        }
};