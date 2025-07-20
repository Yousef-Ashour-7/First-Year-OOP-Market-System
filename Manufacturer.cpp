#include "Manufacturer.h"
#include "Product.h"

void Manufacturer::setManufacturerID(int id)
{
    manufacturerID = id;
}

int Manufacturer::getManufacturerID() 
{
    return manufacturerID;
}

void Manufacturer::addProduct(Product product)
{
    products.push_back(product);
}



void Manufacturer::setName(string n)
{
    name = n;
}

string Manufacturer::getName()
{
    return name;
}

vector <Product> Manufacturer::getProducts()
{
    return products;
}

