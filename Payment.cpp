//cpp

#include <iostream>
#include <vector>
#include"Payment.h"
using namespace std;


Payment::Payment() { amount = 0; }
Payment::Payment(double amnt)
{
    amount = amnt;
}

void Payment::addPaymentMethod(string paymethod)
{
    paymentMethods.push_back(paymethod);
}


void Payment::removePaymentMethod(string paymethod, int i)
{
    for (int i = 0; i < paymentMethods.size(); i++)
    {
        if (paymentMethods[i] == paymethod)
        {
            paymentMethods.erase(paymentMethods.begin() + i);
            break;
        }
    }
}


vector<string> Payment::getPaymentMethods()
{
    return paymentMethods;
}

double Payment::getAmount()
{
    return amount;
}
