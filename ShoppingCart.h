#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class ShoppingCart {
private:
    int userID;
    vector<pair<string, int>> items;

public:
    ShoppingCart(int id);

    void addItem(const string& itemName, int quantity);

    void removeItem(const string& itemName);

    void updateItemQuantity(const string& itemName, int newQuantity);

    double getTotalPrice();

    void checkout();
};

#endif  