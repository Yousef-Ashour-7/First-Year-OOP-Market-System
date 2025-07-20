//cpp

#include <iostream>
#include <string>
using namespace std;

#include"Review.h"


Review::Review(double rate, string t) 
{
    rating = rate;
    text = t;
}


int Review::getReviewID() 
{
    return reviewID;
}


int Review::getUserID() 
{
    return userID;
}


int Review::getProductID()
{
    return productID;
}


double Review::getRating()
{
    return rating;
}


string Review::getText() 
{
    return text;
}




void Review::setReviewID(int rID) 
{
    reviewID = rID;
}


void Review::setUserID(int uID) 
{
    userID = uID;
}



void Review::setProductID(int pID) 
{
    productID = pID;
}


void Review::setRating(double rate) 
{
    rating = rate;
}


void Review::setText(string t)
{
    text = t;
}