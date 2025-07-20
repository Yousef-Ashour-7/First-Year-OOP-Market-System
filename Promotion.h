#ifndef PROMOTION_H
#define PROMOTION_H

#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Promotion {
private:

    int promotionID;
    string name;
    string description;
    double discount;
    string startDate;
    string endDate;

public:

    Promotion();

    Promotion(int id, string promoName, string promoDescription, double promoDiscount);

    void deletePromotion();

    double applyPromotion(double price, bool bool1, bool bool2);

    string getpromoname();

    string getpromodescribtion();

    string getstartdate();

    string getenddate();

    void setstartdate(string Sd);

    void setenddate(string Ed);
};

#endif
