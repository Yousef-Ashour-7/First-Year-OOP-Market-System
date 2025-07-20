#include <iostream>
#include <string>
#include <fstream>
#include "User.h"
#include "Product.h" 
#include "Review.h"
#include "Payment.h"
#include "Order.h"
#include "SocialSharing.h"
#include "Manufacturer.h"
#include "LuckyPurchase.h"  
#include "Wishlist.h"
#include "ShoppingCart.h"
#include "Catalog.h"
#include "Promotion.h"
using namespace std;




int main()
{
		User user;
	    user.registerUser();
	    user.loginUser();
	    

		

	Product prod1("101", "T-Shirt", "Nike", " Men's black cotton T-Shirt with Nike logo ", 50, 3.5, "Clothes");
	Product prod2("102", "Jeans", "Levi's ", "Women's blue denim jeans", 90, 4, "Clothes");
	Product prod3("103", "Smartphone", "Apple", "iPhone 12 Pro Max, 128GB, Pacific Blue ", 500, 5, "Electronics");
	Product prod4("104",  "Laptop" , "Dell" , " Inspiron 15 3000 Series, Intel Core i5, 8GB RAM", 299, 3.25,  "Electronics");
	Product prod5("105",  "Chocolate",   "Cadbury", "Dairy Milk, 100g" , 5, 2.5,  "Food");
	Product prod6("106",    "Coffee",   "Starbucks" , "Medium roast ground coffee, 250g ", 8, 4, "Food");
	Product prod7("107",  "Sneakers" ,  "Adidas"  , "Women's Ultraboost 21 running shoes, pink/white", 45, 4.35,   "Clothes");
	Product prod8("108",  "Hoodie"   ,  "Under Armour" , "Men's Threadborne Fleece Hoodie, grey " , 33, 4.7, "Clothes");
	Product prod9("109",  "Smartwatch",   "Samsung"   ,  "Galaxy Watch Active2, 40mm, Cloud Silver", 123.99, 3.45, "Electronics");
	Product prod10("110",  "Headphones",    "Bose"   ,   "QuietComfort 35 wireless headphones II, black", 67.99, 4, "Electronics");
	Product prod11("111",  "Potato-Chips" , "Lay's"  ,    "Classic Salted, 150g ",3, 3 , "Food");
	Product prod12("112",  "Energy-Drink" , "Red Bull",   "Original, 250ml", 7, 5, "Food");
	Product prod13("113", "Al-Ahly-T-Shirt",  "Adidas" ,  "Al Ahly Home T-Shirt", 50, 4.8,  "Clothes");
	Product prod14("114", "Jacket" , "The North Face",   "Women's Resolve Plus Jacket, black", 33, 4.2, "Clothes");
	Product prod15("115", "Smart-Speaker",  "Amazon" ,   "Echo Dot, 4th Generation, Charcoal"  , 344.99, 2.9, "Electronics");
	Product prod16("116",   "Ice-Cream" ,   "Ben & Jerry's", "Cherry Garcia, 500ml", 5, 4.3, "Food");

	Catalog cate;
	cate.addProduct(prod1);
	cate.addProduct(prod2);
	cate.addProduct(prod3);
	cate.addProduct(prod4);
	cate.addProduct(prod5);
	cate.addProduct(prod6);
	cate.addProduct(prod7);
	cate.addProduct(prod8);
	cate.addProduct(prod9);
	cate.addProduct(prod10);
	cate.addProduct(prod11);
	cate.addProduct(prod12);
	cate.addProduct(prod13);
	cate.addProduct(prod14);
	cate.addProduct(prod15);
	cate.addProduct(prod16);



	vector <Product> suggest1;
	vector <Product> suggest2;
	vector <Product> suggest3;

	suggest1.push_back(prod3);
	

	suggest2.push_back(prod8);
	

    suggest3.push_back(prod6);
	


	vector <Product> cart;
	vector <Product> clothes;
	vector <Product> elec;
	vector <Product> food;
	vector <Product> luckylist;
	cout << "your order ID is 555: " << endl;
	cout << "do you want to see one of the last 3 orders? (y/n)" << endl;

	char luckyanw;
	cin >> luckyanw;
	if (luckyanw == 'y' || luckyanw == 'Y')
	{
		LuckyPurchase luck;
		int id;
		cout << "enter the order ID: (554,553,552) " << endl;
		cin >> id;
		luck.setPreviousOrderID(id);
		luck.suggestLuckyPurchase(suggest1,suggest2,suggest3);
		
		char luckyansw2;
		cout << "do you want to add these items to your cart? (y/n) " << endl;
		cin >> luckyansw2;
		luckylist = luck.getluckylist();
		for (int i = 0; i < luckylist.size(); i++)
		{
			cart.push_back(luckylist[i]);
		}


	}

	
	

	for (int i = 0; i < cate.getproducts().size(); i++)
	{
		if (cate.getproducts()[i].getCategory() == "Clothes")
		{
			clothes.push_back(cate.getproducts()[i]);
		}
		else if (cate.getproducts()[i].getCategory() == "Electronics")
		{
			elec.push_back(cate.getproducts()[i]);
		}
		else if (cate.getproducts()[i].getCategory() == "Food")
		{
			food.push_back(cate.getproducts()[i]);
		}
	}



	fstream ProductFile;
	ProductFile.open("Product.txt", ios::in);
	Product pv;
	char answ1;

	cout << "enter a for all products or enter c for a certain catagory: " << endl;
	cin >> answ1;

	if (answ1 == 'a' || answ1 == 'A')

	{
		string Lines;
		vector <string> strproducts;


		if (ProductFile.is_open())
		{

			while (getline(ProductFile, Lines))
			{

				cout << Lines << endl;
				strproducts.push_back(Lines);
			}
		}
	}
		
		
	else if (answ1 == 'c' || answ1 == 'C')
	{
		char categoryansw;
		cout << "Enter c for clothes, e for electronics, f for food: " << endl;
		cin>> categoryansw;
		if (categoryansw == 'c' || categoryansw == 'C')
		{
			for (int i = 0; i < clothes.size(); i++)
			{
				cout << clothes[i].getName() << endl;
			}
		}
		if (categoryansw == 'e' || categoryansw == 'E')
		{
			for (int i = 0; i < elec.size(); i++)
			{
				cout << elec[i].getName() << endl;
			}
		}
		if (categoryansw == 'f' || categoryansw == 'F')
		{
			for (int i = 0; i < food.size(); i++)
			{
				cout << food[i].getName() << endl;
			}
		}
	}
	

	
	

	
	char contansw;
	do
	{

		cout << "enter the name of the product: " << endl;
		string query;
		cin >> query;
		pv = cate.searchProducts(query);
		char cartanswer;
		cout << "do you want to add this product to the shopping cart?(Y/N)" << endl;
		cin >> cartanswer;
		if (cartanswer == 'y' || cartanswer == 'Y')
		{
			cart.push_back(pv);
		}
		cout << "do you want to add more products? " << endl;
		cin >> contansw;

	} while (contansw == 'Y' || contansw == 'y');
	
	Wishlist myWishlist(1234);
	


	cout << "do you want to add products to the wishlist? " << endl;
	char wishlistansw;
	cin >> wishlistansw;
	if (wishlistansw == 'Y' || wishlistansw == 'y')
	{
		char contansw2;
		do
		{
			string query;
			cout << "what item do you want to add? " << endl;
			cin >> query;
			pv = cate.searchProducts(query);
			myWishlist.addItem(pv);
			cout << "do you want to add more items? " << endl;
			cin >> contansw2;
			
		} while (contansw2 == 'Y' || contansw2 == 'y');
		
		

	}
	cout << "here is your wishlist: " << endl;
	myWishlist.viewWishlist();
	vector <Product> adidas;

	Manufacturer manu;
	for (int i = 0; i < cate.getproducts().size(); i++)
	{
		if (cate.getproducts()[i].getmanufac() == "Adidas")
		{
			adidas.push_back(cate.getproducts()[i]);
		}

	}

	cout << "there is 20% off all addidas products" << endl;
	for (int i = 0; i < adidas.size(); i++)
	{
		cout << adidas[i].getName() << " " << adidas[i].getdisc() << endl;
		double prc = adidas[i].getprice() * 0.8;
		cout << "price $" << prc << endl;
		adidas[i].setprice(prc);
	}

	cout << "do you want to add one of them into your cart? " << endl;
	char adiansw;
	cin >> adiansw;
	if (adiansw == 'y' || adiansw == 'Y')
	{
		cout << "enter name: ";
		string query;
		cin >> query;
		pv = cate.searchProducts(query);
		cart.push_back(pv);
	}

	double totlprice = 0;
	for (int i = 0; i < cart.size(); i++)
	{
		totlprice += cart[i].getprice();
	}



		Promotion start_end;
	    bool bool1, bool2;
	    string word1, word2;
	    start_end.setstartdate("2024 - 06 - 01");
	    start_end.setenddate("2024 - 09 - 01");
	    string str1 = start_end.getstartdate();
	    string str2 = start_end.getenddate();
	
	    word1 = start_end.getstartdate();
	
	    word2 = start_end.getenddate();
	
	    
	    if (str1 == word1) 
	    {
	        bool1 = 1;
	    }
	    
	  
	    if (str2 == word2)
	    {
	
	        bool2 = 1;
	    }
	    
	    
	    
	    
	
	    Promotion myPromotion(1234, "Summer Sale", "Get 20% off your order during the Summer of 2024", 0.2);
	    
	
	    cout << myPromotion.getpromoname() << ": " << endl;
	
	    cout << myPromotion.getpromodescribtion() << " starting from "<< start_end.getstartdate()<< " to "<<start_end.getenddate() <<"."<<endl;
		double originalPrice = totlprice;
		double discountedPrice = myPromotion.applyPromotion(originalPrice, bool1, bool2);
	    
	
	    cout << "Original price: $" << originalPrice << endl;
		cout << "Discounted price: $" << discountedPrice << endl;


		vector <string> number;
		    double cardAmount;
		    string numStr;
		    string creditCard;
		    char answer2, answer3;
		    char numArr[8] = "";
		    cardAmount = 0 ;
		    Payment pay(cardAmount);
		    
		
		   
		        cout << "enter your card number: ";
		        cin >> numStr;
		        
		        
		
		        for (int i = 0; i < numStr.length(); i++)
		        {
		            numArr[i] = numStr[i];
		            if (i >= 4)
		            {
		                numArr[i] = '*';
		            }
		        }
		
		
		
		        cout << "your card number is ";
		        for (int i = 0; i < 8; i++)
		        {
		            cout << numArr[i];
		
		        }
		


				if (numArr[0] == '4') {
					creditCard = "Visa";
					cardAmount = 1000;
				}
				else if (numArr[0] == '5') {
					creditCard = "MasterCard";
					cardAmount = 300;
				}
				else if (numArr[0] == '3' && (numArr[1] == '4' || numArr[1] == '7')) {
					creditCard = "American Express";
					cardAmount = 100;
				}
				else if (numArr[0] == '6' && numArr[1] == '0') {
					creditCard = "Discover";
					cardAmount = 0;
				}
				else {
					creditCard = "Unknown";
				}
		        
		        cout << " that has $" << cardAmount << endl;
		
		
		
		
		        
		
		
		        pay.addPaymentMethod(creditCard);
		        cout << "Payment method: " << creditCard << endl;
		
		       


			if (cardAmount < discountedPrice)
			{
				cout << "sorry you dont have enough money " << endl;
				exit(0);
			}
	    

			Order order;
			order.createOrder(cart, discountedPrice);
			string stat = "pending";
			order.setStatus(stat);
			cout << "status: " << order.getStatus() << endl;
			order.cancelOrder(cart);





			cout << "do you want to drop a review? " << endl;
			char revansw;
			cin >> revansw;
			if (revansw == 'Y' || revansw == 'y')
			{
				string platform;
				cout << "select platform: " << endl;
				cin >> platform;
				SocialSharing social;
				social.setplatform(platform);
				cout << "please add a review to " << social.getplatform() << endl;
				string text;
				cin >> text;
				cout << "provide a rating from 1 to 5" << endl;
				double rating;
				cin >> rating;
				Review rev(rating, text);
				cout << "thanks for your cooperation!" << endl;


			}

			cout << endl;
			cout << endl;

			cout << "thank you for shopping with us! Have a nice day";

	
	


	

		



		
	


}