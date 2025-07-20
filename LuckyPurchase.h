#ifndef LUCKYPURCHASE_H
#define LUCKYPURCHASE_H

#include <iostream>
#include <string>
#include "Product.h"
using namespace std;

class LuckyPurchase 
{
private:
    int previousOrderID;
    vector <Product> luckylist;

public:

    vector <Product> getluckylist();

    void setPreviousOrderID(int orderID);

    int getPreviousOrderID();

    vector <Product> suggestLuckyPurchase(vector <Product> vec1, vector <Product> vec2, vector <Product> vec3);
};

#endif  
