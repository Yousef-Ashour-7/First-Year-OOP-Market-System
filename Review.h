//header

#ifndef REVIEW_H
#define REVIEW_H

#include <iostream>
#include <string>
using namespace std;

class Review {
private:
    int reviewID, userID, productID;
    double rating;
    string text;

public:
    Review(double rate, string t);

    int getReviewID();

    int getUserID();

    int getProductID();

    double getRating();

    string getText();

    void setReviewID(int rID);

    void setUserID(int uID);

    void setProductID(int pID);

    void setRating(double rate);

    void setText(string t);
};


#endif