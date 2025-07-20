#ifndef CATALOG_H
#define CATALOG_H

#include <iostream>
#include <string> 
#include <vector> 
#include <sstream>
#include"Product.h" 
using namespace std;

class Catalog : public Product
{
private:
    vector<Product> products;

public:

    vector<Product> getproducts()
    {
        return products;
    }

    void addProduct(Product& product) {
        products.push_back(product);
        //cout << "Product '" << product.getName() << "' added." << endl;
    }

    void removeProduct(string& productId) {
        for (int i = 0; i < products.size(); ++i) {
            if (products[i].getID() == productId) {
                cout << "Product '" << products[i].getName() << "' removed." << endl;
                products.erase(products.begin() + i);
                return;
            }
        }
        cout << "Product not found." << endl;
    }

    Product searchProducts(string query) {
        cout << "Search results for '" << query << "':" << endl;
        bool found = false;
        for (int i = 0; i < products.size();i++) {
            if (products[i].getName().find(query) != string::npos) {
                cout <<"Product " << products[i].getName() << " is found in " << products[i].getCategory() << endl;
                found = true;
                return products[i];
            }
        }
        if (!found) {
            cout << "No matching products found." << endl;
        }
    }

    Product* getProductByID(string& productId) {
        for (int i = 0; i < products.size(); ++i) {
            if (products[i].getID() == productId) {
                return &products[i];
            }
        }
        return nullptr;  // Return nullptr if product is not found
    }

    vector<Product> getProductsByCategory(string& category) {
        vector<Product> categoryProducts;
        for (Product& product : products) {
            if (product.getCategory() == category) {
                categoryProducts.push_back(product);
            }
        }
        return categoryProducts;
    }
};
#endif  