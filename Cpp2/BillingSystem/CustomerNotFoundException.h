#ifndef CUSTOMERNOTFOUNDEXCEPTION_H
#define CUSTOMERNOTFOUNDEXCEPTION_H

#include<string>
#include<exception>

class CustomerNotFoundException : public std::exception{
    std::string err;
    public:
        CustomerNotFoundException() {}
        CustomerNotFoundException(std::string message) {
            err = message;
        }
        const std::string what() {
            return err;
        }
};

#endif // CUSTOMERNOTFOUNDEXCEPTION_H
