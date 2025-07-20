#include "ShoppingCart.h"

ShoppingCart::ShoppingCart(int id)
{
    userID = id;
}

void ShoppingCart::addItem(const string& itemName, int quantity) 
{
    items.push_back(make_pair(itemName, quantity));
    cout << quantity << " " << itemName << "(s) added to cart." << endl;
}

void ShoppingCart::removeItem(const string& itemName)
{
    bool found = false;
    for (int i = 0; i < items.size(); i++) 
    {
        if (items[i].first == itemName) 
        {
            items.erase(items.begin() + i);
            cout << itemName << " removed from cart." << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << itemName << " not found in cart." << endl;
    }
}

void ShoppingCart::updateItemQuantity(const string& itemName, int newQuantity) {
    bool found = false;
    for (int i = 0; i < items.size(); i++) 
    {
        if (items[i].first == itemName)
        {
            items[i].second = newQuantity;
            cout << "Quantity of " << itemName << " updated to " << newQuantity << "." << endl;
            found = true;
            break;
        }
    }
    if (!found) 
    {
        cout << itemName << " not found in cart." << endl;
    }
}

double ShoppingCart::getTotalPrice() 
{
    double totalPrice = 0.0;
    for (int i = 0; i < items.size(); i++) 
    {
        totalPrice += items[i].second * 10.0;
    }
    return totalPrice;
}

void ShoppingCart::checkout() 
{
    double totalPrice = getTotalPrice();
    cout << "Total price: $" << totalPrice << endl;
    cout << "Thank you for shopping with us!" << endl;
    items.clear();
}