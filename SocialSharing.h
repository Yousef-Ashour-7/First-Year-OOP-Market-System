//header

#ifndef SOCIALSHARING_H
#define SOCIALSHARING_H


#include <iostream>
#include <string>

using namespace std;


class SocialSharing {
private:
    int userID;
    int productID;
    string platform;

public:

    SocialSharing();

    SocialSharing(int user, int product, string platform);


    int getuserID();

    int getproductID();

    string getplatform();


    void setuserID(int user);

    void setproductID(int product);

    void setplatform(string platform);
};


#endif