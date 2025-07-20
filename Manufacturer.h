#ifndef MANUFACTURER_H
#define MANUFACTURER_H
#include "Product.h"
#include <string>
#include <list>
using namespace std;

class Manufacturer {
private:
    int manufacturerID;
    string name;
    vector <Product> products;

public:
    void setManufacturerID(int id);
    int getManufacturerID();
    void addProduct(Product product);
    
    void setName(string n);
    string getName();
    vector <Product> getProducts();
};

#endif  