//header

#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;



class Product
{
private:
	string productID, productName, manufacturer, description, category;
	double price, rating;
	vector<double> reviews;
	
	
	 

	void updateRating();
		

public:
	Product();

	Product(string id, string name, string m, string desc, double p, double r, string ctgry);
	
	void getProductinfo();

	void addRating(double review);
	
	double getRating();

	double getprice();
	
	void setRating(double r);
	
	void setprice(double p);

	vector<double> getReviews();

	string getID();

	string getName();

	string getCategory();

	string getmanufac();
	
	string getdisc();
    /*vector<Product> stringsToProducts(vector<string> strVec);*/

	

};


#endif
