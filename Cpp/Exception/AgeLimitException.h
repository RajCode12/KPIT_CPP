#include<iostream>
#include<exception>

class AgeLimitException : public std::exception {
    std::string err;
    public:
        AgeLimitException() {}
        AgeLimitException(std::string message) {
            err = message;
        }
        const std::string what() {
            return err;
        }
};