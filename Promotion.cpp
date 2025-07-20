#include "Promotion.h"
#include <string>

Promotion::Promotion() {}

Promotion::Promotion(int id, string promoName, string promoDescription, double promoDiscount) 
{
    promotionID = id;
    name = promoName;
    description = promoDescription;
    discount = promoDiscount;
    
}

string Promotion::getpromoname()
{
    return name;
}

string Promotion::getpromodescribtion()
{
    return description;
}

string Promotion::getstartdate()
{
    return startDate;
}

string Promotion::getenddate()
{
    return endDate;
}

void Promotion::setstartdate(string Sd)
{
    startDate = Sd;
}

void Promotion::setenddate(string Ed)
{
    endDate = Ed;
}

void Promotion::deletePromotion() 
{
    
    cout << "Promotion with ID " << promotionID << " has been deleted." << endl;
}

double Promotion::applyPromotion(double price, bool bool1, bool bool2 )
{
    
    
    if (bool1 == 1 && bool2 == 1)
    {
        return price * (1 - discount);
    }
    else
    {
        return price;
    }
}