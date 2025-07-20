//cpp

#include <iostream>
#include <vector>
#include <string>

using namespace std;

#include"Order.h"

Order::Order() {}

Order::Order(int orderID, int userID, vector<string> items) 
{
    this->orderID = orderID;
    this->userID = userID;
    this->items = items;
    this->status = "Pending";
}


void Order::createOrder(vector <Product> vect, double total_price) 
{   

    for (int i = 0; i < vect.size(); i++) 
    {
        
        cout << "item " << i + 1 << ": " << endl;
        vect[i].getProductinfo();
        
        
    }
    cout << "total price = $" << total_price << endl;
    cout << "Order created." << endl;
}


int Order::getOrderID() 
{
    return orderID;
}


void Order::setOrderID(int orderID) 
{
    this->orderID = orderID;
}


void Order::cancelOrder(vector <Product> vect)
{
    string answer;
    cout << "do you want to cancel the order? ";
    cin >> answer;
    if (answer == "Y" || answer == "y") {
        vect.clear();
        status = "Canceled";
        cout << "Order canceled." << endl;
        exit(0);
    }
    else {
        cout << "Order not canceled." << endl;
    }
}


string Order::getStatus() 
{
    return status;
}


void Order::setStatus(string stat) 
{
    status = stat;
}


void Order::printOrder() 
{
    cout << "Order ID: " << orderID << endl;
    cout << "User ID: " << userID << endl;
    cout << "Items: ";
    for (string item : items) {
        cout << item << ", ";
    }
    cout << endl;
    cout << "Status: " << status << endl;
}