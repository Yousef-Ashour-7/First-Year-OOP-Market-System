//cpp

#include <iostream>
#include <string>

using namespace std;

#include"SocialSharing.h"


SocialSharing::SocialSharing() {}


SocialSharing::SocialSharing(int user, int product, string platform)
{
    userID = user;
    productID = product;
    this->platform = platform;
}



int SocialSharing::getuserID()
{
    return userID;
}



int SocialSharing::getproductID() 
{
    return productID;
}


string SocialSharing::getplatform() 
{
    return platform;
}


void SocialSharing::setuserID(int user)
{
    userID = user;
}


void SocialSharing::setproductID(int product) 
{
    productID = product;
}


void SocialSharing::setplatform(string platform)
{
    this->platform = platform;
}
