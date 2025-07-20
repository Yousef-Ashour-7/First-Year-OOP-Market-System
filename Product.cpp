//cpp
using namespace std; 
#include"Product.h"



Product::Product(){}


Product::Product(string id, string name, string m, string desc, double p, double r, string ctgry)
{
	productID = id, productName = name, manufacturer = m, description = desc,price = p, rating = r, category = ctgry ;
}

double Product::getRating()
{
	return rating;
}

double Product::getprice()
{
    return price;
}

void Product::setprice(double p)
{
    price = p;
}

void Product::setRating(double r)
{
	rating = r;
}



vector<double> Product::getReviews()
{
	return reviews;
}



void Product::getProductinfo()
{
	cout << "Product ID: " << productID << endl;
	cout << "Product: " << productName << endl;
	cout << "Price: $" << price << endl;
	cout << "rating: " << rating << endl;
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Description: " << description << endl;
	cout << "catagory: " << category << endl;
}

void Product::addRating(double rate)
{
	if (rate >= 1 && rate <= 5)
	{
		reviews.push_back(rate);
		reviews.push_back(rating);
		updateRating();
	}
}


void Product::updateRating()
{
	double total = 0;
	for (int i = 0; i < reviews.size(); i++)
	{
		total += reviews[i];
	}
	rating = (total / reviews.size());
}

string Product::getID()
{
	return productID;
}

string Product::getName() 
{
	return productName;
}

string Product::getCategory()
{
	return category;
}

string Product::getmanufac()
{
	return manufacturer;
}

string Product::getdisc()
{
	return description;
}


