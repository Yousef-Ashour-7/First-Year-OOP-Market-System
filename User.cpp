//cpp

#include"User.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;


User::User() {}

User::User(string password, int userID, string email, vector<string> cart, vector<string> wishlist, vector<string> order_history) 
{
    this->password = password;
    this->userID = userID;
    this->email = email;
    this->cart = cart;
    this->wishlist = wishlist;
    this->order_history = order_history;
}


string User::getPassword()
{
    return password;
}

int User::getUserID() 
{
    return userID;
}


string User::getEmail()
{
    return email;
}


vector<string> User::getCart() 
{
    return cart;
}


vector<string> User::getWishlist() 
{
    return wishlist;
}


vector<string> User::getOrderHistory() 
{
    return order_history;
}


void User::setPassword(string password) 
{
    this->password = password;
}



void User::setUserID(int userID) 
{
    this->userID = userID;
}


void User::setEmail(string email) 
{
    this->email = email;
}


void User::setCart(vector<string> cart)
{
    this->cart = cart;
}


void User::setWishlist(vector<string> wishlist) 
{
    this->wishlist = wishlist;
}


void User::setOrderHistory(vector<string> order_history) 
{
    this->order_history = order_history;
}

void User::setUsername(string username)
{
    this->username = username;
}

void User::registerUser() 
{
    cout << "Enter a username: ";
    cin >> username;
    setUsername(username);

    cout << "Enter a password: ";
    cin >> password;
    setPassword(password);

    cout << "Enter your email: ";
    cin >> email;
    setEmail(email);

    cout << "Registration successful." << endl;
}


void User::loginUser()
{
    cout << "Enter your username: ";
    cin >> username;

    cout << "Enter your password: ";
    cin >> password;

    if (getPassword() == password) {
        cout << "Login successful." << endl;
    }
    else {
        cout << "Invalid username or password. Please try again." << endl;
        return;
    }
}
    /*char action = ' ';
    while (action != 'q') {
        cout << "Enter 'a' to add to cart, 'w' to add to wishlist, 'o' to view order history, or 'q' to quit: ";
        cin >> action;

        if (action == 'a') {
            cout << "Enter product name: ";
            cin >> product;
            cart.push_back(product);
            cout << "Product added to cart." << endl;
        }
        else if (action == 'w') {
            cout << "Enter product name: ";
            cin >> product;
            wishlist.push_back(product);
            cout << "Product added to wishlist." << endl;
        }
        else if (action == 'o') {
            cout << "Order History: ";
            for (string order : order_history) {
                cout << order << ", ";
            }
            cout << endl;
        }
        else if (action != 'q') {
            cout << "Invalid action. Please try again." << endl;
        }
    }*/



void User::viewOrderHistory() 
{
    cout << "Order History: ";
    for (string order : order_history) {
        cout << order << ", ";
    }
    cout << endl;
}


void User::display() 
{
    cout << "Username: " << getPassword() << endl;
    cout << "User ID: " << getUserID() << endl;
    cout << "Email: " << getEmail() << endl;
    cout << "Cart: ";
    for (string product : getCart()) {
        cout << product << ", ";
    }
    cout << endl;
    cout << "Wishlist: ";
    for (string product : getWishlist()) {
        cout << product << ", ";
    }
    cout << endl;
    viewOrderHistory();
}