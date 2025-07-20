//header

#ifndef PAYMENT_H
#define PAYMENT_H

#include <iostream>
#include <vector>
using namespace std;



class Payment
{
private:
    string paymentID;
    vector<string> paymentMethods;
    double amount;

public:

    Payment();

    Payment(double amnt);
    
    void addPaymentMethod(string paymethod);



    void removePaymentMethod(string paymethod,int i);



    vector<string> getPaymentMethods();
    

    double getAmount();
    
};



#endif