#include<iostream>
#include<cstring>
#include "AgeLimitException.h"
#include "Vote.h"

Vote::Vote() : age(18)
{
    
}

Vote::Vote(int a) : age(a)
{
}

void Vote::canVote()
{
    if(age >= 18) {
        std::cout<<"Eligible for Voting..."<<std::endl;
    } else {
        throw AgeLimitException("Not Eligible for Voting...");
    }
}
