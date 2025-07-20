//header

#ifndef ORDER_H
#define ORDER_H

#include <iostream>
#include <vector>
#include <string>
#include "Product.h"

using namespace std;


class Order {
private:
    int orderID;
    int userID;
    vector<string> items;
    string status;
    int numItems;
public:
    Order();

    Order(int orderID, int userID, vector<string> items);

    void createOrder(vector <Product> vect, double total_price);

    int getOrderID();

    void setOrderID(int orderID);

    void cancelOrder(vector <Product> vect);

    string getStatus();

    void setStatus(string status);

    void printOrder();
};


#endif
