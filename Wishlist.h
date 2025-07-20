#ifndef WISHLIST_H
#define WISHLIST_H

#include <vector>
#include <string>
#include "Product.h"
using namespace std;

class Wishlist 
{
private:

    int userID;

    vector <Product> items;

public:

    Wishlist(int id);

    void addItem(Product item);

    void removeItem(Product item);

    vector<Product> getitems();

    void viewWishlist();
};

#endif