#ifndef USER_H
#define USER_H

#include <iostream>
#include <vector>
#include <string>

//header

using namespace std;



class User {
private:
    int userID;
    string password;
    string email;
    vector<string> cart;
    vector<string> wishlist;
    vector<string> order_history;
    string username;

    string product;


public:

    User();

    User(string password, int userID, string email, vector<string> cart, vector<string> wishlist, vector<string> order_history);
        
    string getPassword();

    int getUserID();

    string getEmail();

    vector<string> getCart();

    vector<string> getWishlist();

    vector<string> getOrderHistory();

    void setPassword(string password);

    void setUsername(string password);

    void setUserID(int userID);

    void setEmail(string email);

    void setCart(vector<string> cart);

    void setWishlist(vector<string> wishlist);

    void setOrderHistory(vector<string> order_history);

    void registerUser();

    void loginUser();

    void viewOrderHistory();

    void display();

};


#endif
