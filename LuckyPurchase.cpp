#include "LuckyPurchase.h"

void LuckyPurchase::setPreviousOrderID(int orderID)
{
    previousOrderID = orderID;
}

int LuckyPurchase::getPreviousOrderID() 
{
    return previousOrderID;
}

vector <Product> LuckyPurchase::getluckylist()
{
    return luckylist;

}
vector <Product> LuckyPurchase::suggestLuckyPurchase(vector <Product> vec1, vector <Product> vec2, vector <Product> vec3)
{
    cout << "We suggest you to buy " << endl;
    for (int i = 0; i < vec1.size(); i++)
    {
        if (previousOrderID == 554)
        {
            cout << vec1[i].getName()<< endl;
            luckylist.push_back(vec1[i]);
            return luckylist;
        }
        else if (previousOrderID == 553 )
        {
            cout << vec2[i].getName() << endl;
            luckylist.push_back(vec2[i]);
            return luckylist;
        }
        else if (previousOrderID == 552)
        {
            cout << vec3[i].getName() << endl;
            luckylist.push_back(vec3[i]);
            return luckylist;
        }

        else 
        {
            cout << "Sorry, we don't have any suggestions for you at this time." << endl;
        }
    }
    
}


