#include <iostream>
#include "Wishlist.h"

Wishlist::Wishlist(int id) 
{
    userID = id;
}

vector<Product> Wishlist::getitems()
{
    return items;
}

void Wishlist::addItem(Product item) 
{
    items.push_back(item);
}

void Wishlist::removeItem(Product item)
{
    for (int i = 0; i < items.size(); i++) 
    {
        if (items[i].getName() == item.getName())
        {
            items.erase(items.begin() + i);
            break;
        }
    }
}

void Wishlist::viewWishlist() 
{
    cout << "Wishlist for User ID " << userID << ":" << endl;
    for (int i = 0; i < items.size(); i++) 
    {
        cout << "- " << items[i].getName() << endl;
    }
}