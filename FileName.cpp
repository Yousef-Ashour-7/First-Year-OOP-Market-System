//#include <iostream>
//#include <vector>
//#include <string>
//#include <sstream>
//using namespace std;
//
//
////main
//
//#include "Product.h"
//
//int main() {
//    int r;
//    char answer;
//
//    Product p1("product103", "iPhone X", 999.99, "Apple", "The latest iPhone");
//
//    
//    p1.getProductinfo();
//    p1.setRating(4.5);
//
//    do {
//        do {
//            cout << "Enter a number from 1 to 5: ";
//            cin >> r;
//            if (r < 1 || r > 5) {
//                cout << "Invalid input. Please enter a number from 1 to 5." << endl;
//            }
//        } while (r < 1 || r > 5);
//
//        p1.addReview(r);
//
//        cout << "Do you want to continue? (Y/N) ";
//        cin >> answer;
//    } while (answer == 'Y' || answer == 'y');
//
//    cout << "Updated rating: " << p1.getRating() << endl;
//
//    vector<double> productReviews = p1.getReviews();
//
//    cout << "Reviews:" << endl;
//
//    for (int i = 0; i < productReviews.size(); i++) 
//    {
//        cout << ". " << productReviews[i] << endl;
//    }
//
//    return 0;
//}
//
//
//// main
//
//#include"Payment.h"
//
//
//int main() {
//    vector <string> number;
//    double cardAmount;
//    string numStr;
//    string creditCard;
//    char answer2, answer3;
//    char numArr[8] = "";
//    cardAmount = 100;
//    Payment pay(cardAmount);
//    
//
//    do
//    {
//        cout << "enter your card number: ";
//        cin >> numStr;
//        
//        
//
//        for (int i = 0; i < numStr.length(); i++)
//        {
//            numArr[i] = numStr[i];
//            if (i >= 4)
//            {
//                numArr[i] = '*';
//            }
//        }
//
//
//
//        cout << "your card number is ";
//        for (int i = 0; i < 8; i++)
//        {
//            cout << numArr[i];
//
//        }
//
//        
//        cout << " that has $" << cardAmount << endl;
//
//
//
//
//        
//
//        if (numArr[0] == '4') {
//            creditCard = "Visa";
//        }
//        else if (numArr[0] == '5') {
//            creditCard = "MasterCard";
//        }
//        else if (numArr[0] == '3' && (numArr[1] == '4' || numArr[1] == '7')) {
//            creditCard = "American Express";
//        }
//        else if (numArr[0] == '6' && numArr[1] == '0') {
//            creditCard = "Discover";
//        }
//        else {
//            creditCard = "Unknown";
//        }
//
//        pay.addPaymentMethod(creditCard);
//        cout << "Payment method: " << creditCard << endl;
//
//        cout << "Do you want to enter another payment methode? (Y/N) " << endl;
//        cin >> answer2;
//
//    } while (answer2 == 'y' || answer2 == ' Y');
//
//
//    
//
//
//
//    vector<string> paymentMethods = pay.getPaymentMethods();
//    cout << "your payment methods: " << endl;
//
//    for (int i = 0; i < paymentMethods.size(); i++) 
//    {
//        cout << paymentMethods[i]  << endl;
//    }
//    
//
//    
//    cout << "do you want to remove a payment methode? (Y/N) " << endl;
//    cin >> answer3;
//    while (answer3 == 'y' || answer3 == 'Y')
//    {
//        int n;
//        cout << "which card whould you like to remove? (0,1,2,3,....) " << endl;
//        cin >> n;
//        pay.removePaymentMethod(creditCard,n);
//
//        cout << "Payment methods after removing card: ";
//        paymentMethods = pay.getPaymentMethods();
//        for (int n = 0; n < paymentMethods.size(); n++) 
//        {
//            cout << paymentMethods[n] << endl;
//        }
//        
//        cout << "do you want to remove another payment methode? (Y/N) " << endl;
//        cin >> answer3;
//        
//    }
//    return 0;
//}
//
//
//////main
//
//
//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//#include"User.h"
////
//
//int main() {
//    vector<string> cart;
//    vector<string> wishlist;
//    vector<string> order_history;
//    User user("password123", 1, "user@example.com", cart, wishlist, order_history);
//    char choice = ' ';
//    while (choice != 'q') {
//        cout << "Enter 'r' to register, 'l' to login, or 'q' to quit: ";
//        cin >> choice;
//
//        if (choice == 'r') {
//            user.registerUser();
//        }
//        else if (choice == 'l') {
//            user.loginUser();
//        }
//        else if (choice != 'q') {
//            cout << "Invalid choice. Please try again." << endl;
//        }
//    }
//
//    return 0;
//}
//
////main
//
//#include"Review.h"
//
//int main() {
//    int reviewID, userID, productID;
//    float rating;
//    string text, x;
//    cout << "can you Review the program \n";
//    cout << "enter Review ID: ";
//
//    cin >> reviewID;
//    cout << "enter UserID: ";
//    cin >> userID;
//    cout << "enter ProductID: ";
//    cin >> productID;
//    cout << "enter Rating: ";
//    cin >> rating;
//    cout << "enter Text: ";
//    cin >> text;
//    cout << "thanks for a time \n";
//    Review myReview(reviewID, userID, productID, rating, text);
//    cout << "Review ID: " << myReview.getReviewID() << endl;
//    cout << "User ID: " << myReview.getUserID() << endl;
//    cout << "Product ID: " << myReview.getProductID() << endl;
//    cout << "Rating: " << myReview.getRating() << endl;
//    cout << "Text: " << myReview.getText() << endl;
//    cout << "do you want to change your Rating (yes, no)?";
//    cin >> x;
//    if (x == "yes") {
//        cout << "enter Rating: ";
//        cin >> rating;
//        cout << "enter Text: ";
//        cin >> text;
//
//        myReview.setRating(rating);
//        myReview.setText(text);
//        cout << "Review ID: " << myReview.getReviewID() << endl;
//        cout << "User ID: " << myReview.getUserID() << endl;
//        cout << "Product ID: " << myReview.getProductID() << endl;
//        cout << "New Rating: " << myReview.getRating() << endl;
//        cout << "New text: " << myReview.getText() << endl;
//    };
//    return 0;
//}
//
//////main
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//#include"SocialSharing.h"
//
//int main() {
//    string x, platform, text;
//    int userID, productID;
//    cout << "do you want to sharing? ";
//    cin >> x;
//    if (x == "yes") {
//        cout << "enter userID";
//        cin >> userID;
//        cout << "enter productID";
//        cin >> productID;
//        cout << "chose platform (facebook , Twitter , instagram)";
//        cin >> platform;
//        cout << "write on the post";
//        cin >> text;
//        cout << "you will share " << text << " on " << platform << endl;
//    }
//
//    SocialSharing share(userID, productID, platform);
//
//
//    cout << "User ID: " << share.getuserID() << endl;
//    cout << "Product ID: " << share.getproductID() << endl;
//    cout << "Platform: " << share.getplatform() << endl;
//
//    return 0;
//}
////
//////main
//
//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//#include"Order.h"
//
//
//int main() {
//    vector<string> items;
//    Order order(1, 123, items);
//    order.createOrder();
//    order.printOrder();
//    order.cancelOrder();
//    order.printOrder();
//
//    return 0;
//}
//
//#include <iostream>
//#include "Wishlist.h"
//
//int main() {
//    Wishlist myWishlist(1234);
//    myWishlist.addItem("iPhone");
//    myWishlist.addItem("MacBook");
//    myWishlist.addItem("AirPods");
//    myWishlist.viewWishlist();
//    myWishlist.removeItem("MacBook");
//    myWishlist.viewWishlist();
//
//    return 0;
//}
//
//#include <iostream>
//#include "Promotion.h"
//
//int main() {
//
//
//    Promotion start_end;
//    bool bool1, bool2;
//    string word1, word2;
//    start_end.setstartdate("2023 - 06 - 01");
//    start_end.setenddate("2023 - 09 - 01");
//    string str1 = start_end.getstartdate();
//    string str2 = start_end.getenddate();
//
//    word1 = start_end.getstartdate();
//
//    word2 = start_end.getenddate();
//
//    
//    if (str1 == word1) 
//    {
//        bool1 = 1;
//    }
//    
//  
//    if (str2 == word2)
//    {
//
//        bool2 = 1;
//    }
//    
//    
//    
//    
//
//    Promotion myPromotion(1234, "Summer Sale", "Get 20% off your order during the Summer of 2023", 0.2);
//    double originalPrice = 100;
//    double discountedPrice = myPromotion.applyPromotion(originalPrice,bool1,bool2);
//
//    cout << myPromotion.getpromoname() << ": " << endl;
//
//    cout << myPromotion.getpromodescribtion() << " starting from "<< start_end.getstartdate()<< " to "<<start_end.getenddate() <<"."<<endl;
//
//    
//
//    cout << "Original price: $" << originalPrice << endl;
//
//    
//    
//    cout << "Discounted price: $" << discountedPrice << endl;
//    
//
//    return 0;
//}
//
//
//#include <iostream>
//#include <string>
//#include <list>
//
//using namespace std;
//
//class Manufacturer {
//private:
//    int manufacturerID;
//    string name;
//    list<string> products;
//
//public:
//    void setManufacturerID(int id) {
//        manufacturerID = id;
//    }
//
//    int getManufacturerID() {
//        return manufacturerID;
//    }
//
//    void addProduct(string product) {
//        products.push_back(product);
//    }
//
//    void removeProduct(string product) {
//        products.remove(product);
//    }
//
//    void setName(string n) {
//        name = n;
//    }
//
//    string getName() {
//        return name;
//    }
//
//    list<string> getProducts() {
//        return products;
//    }
//};
//
//int main() {
//    Manufacturer m1;
//
//    m1.setManufacturerID(123);
//    m1.setName("Apple");
//    m1.addProduct("iPhone");
//    m1.addProduct("Macbook");
//    m1.removeProduct("Macbook");
//
//    cout << "Manufacturer ID: " << m1.getManufacturerID() << endl;
//    cout << "Name: " << m1.getName() << endl;
//
//    cout << "Products: ";
//    for (auto i : m1.getProducts()) {
//        cout << i << ", ";
//    }
//    cout << endl;
//
//    
//}
//
//
//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//class Catalog
//{
//private:
//    vector<vector<string>> categories;
//
//public:
//
//    Catalog()
//    {
//        categories.resize(3);
//    }
//
//    void addProduct(string category, string product) {
//        if (isValidCategory(category)) {
//            int index = getCategoryIndex(category);
//            categories[index].push_back(product);
//            cout << "Product '" << product << "' added to the '" << category << "' category." << endl;
//        }
//        else {
//            cout << "Invalid category. Product not added." << endl;
//        }
//    }
//
//    void removeProduct(string category, string& product) {
//        if (isValidCategory(category)) {
//            int index = getCategoryIndex(category);
//            bool found = false;
//            for (auto it = categories[index].begin(); it != categories[index].end(); ++it) {
//                if (*it == product) {
//                    categories[index].erase(it);
//                    cout << "Product '" << product << "' removed from the '" << category << "' category." << endl;
//                    found = true;
//                    break;
//                }
//            }
//            if (!found) {
//                cout << "Product not found in the '" << category << "' category." << endl;
//            }
//        }
//        else {
//            cout << "Invalid category. Product not removed." << endl;
//        }
//    }
//
//    void searchProducts(const string& query) const {
//        cout << "Search results for '" << query << "':" << endl;
//        bool found = false;
//        for (const auto& category : categories) {
//            for (const auto& product : category) {
//                if (product.find(query) != string::npos) {
//                    cout << "- " << product << endl;
//                    found = true;
//                }
//            }
//        }
//        if (!found) {
//            cout << "No matching products found." << endl;
//        }
//    }
//
//    void printProductsByCategory(const string& category) const {
//        cout << "Products in the '" << category << "' category:" << endl;
//        int index = getCategoryIndex(category);
//        if (index != -1) {
//            for (const auto& product : categories[index]) {
//                cout << "- " << product << endl;
//            }
//        }
//        else {
//            cout << "Invalid category." << endl;
//        }
//    }
//
//    string getProductByID(const string& productId) const {
//        for (const auto& category : categories) {
//            for (const auto& product : category) {
//                if (product == productId) {
//                    return product;
//                }
//            }
//        }
//        return "";  // Return empty string if product is not found
//    }
//
//    vector<string> getProductsByCategory(const string& category) const {
//        vector<string> products;
//        int index = getCategoryIndex(category);
//        if (index != -1) {
//            products = categories[index];
//        }
//        return products;
//    }
//
//private:
//    bool isValidCategory(const string& category) const {
//        return (category == "Electronics" || category == "Clothes" || category == "Food");
//    }
//
//    int getCategoryIndex(const string& category) const {
//        if (category == "Electronics") {
//            return 0;
//        }
//        else if (category == "Clothes") {
//            return 1;
//        }
//        else if (category == "Food") {
//            return 2;
//        }
//        return -1;
//    }
//};
//
//
//
//int main() {
//    Catalog catalog;
//
//    catalog.addProduct("Electronics", "iPhone 13 Pro Max");
//    catalog.addProduct("Electronics", "Samsung A11");
//    catalog.addProduct("Electronics", "iPhone Headphone");
//    catalog.addProduct("Clothes", "Adidas T-Shirt");
//    catalog.addProduct("Clothes", "Al Ahly T-Shirt");
//    catalog.addProduct("Food", "Eggs");
//    catalog.addProduct("Food", "Noodles");
//    catalog.addProduct("Food", "Fish");
//    catalog.addProduct("Food", "Meat");
//
//    catalog.printProductsByCategory("Electronics");
//    catalog.printProductsByCategory("Clothes");
//    catalog.printProductsByCategory("Food");
//
//    string productId = catalog.getProductByID("Samsung A11");
//    if (!productId.empty()) {
//        cout << "Product found by ID: " << productId << endl;
//    } else {
//        cout << "Product not found." << endl;
//    }
//
//    vector<string> clothesProducts = catalog.getProductsByCategory("Clothes");
//    cout << "Products in the Clothes category:" << endl;
//    for (const auto& product : clothesProducts) {
//        cout << "- " << product << endl;
//    }
//
//    return 0;
//}
//
//#include "Catalog.h"
//
//
//
//int main() {
//    Catalog catalog;
//
//    catalog.addProduct("Electronics", "iPhone 13 Pro Max");
//    catalog.addProduct("Electronics", "Samsung A11");
//    catalog.addProduct("Electronics", "iPhone Headphone");
//    catalog.addProduct("Clothes", "Adidas T-Shirt");
//    catalog.addProduct(Clothes", "Al Ahly T-Shirt);
//    catalog.addProduct("Food", "Eggs");
//    catalog.addProduct("Food", "Noodles");
//    catalog.addProduct("Food", "Fish");
//    catalog.addProduct("Food", "Meat");
//
//    
//
//    string productId = catalog.getProductByID("Samsung A11");
//    if (!productId.empty()) {
//        cout << "Product found by ID: " << productId << endl;
//    }
//    else {
//        cout << "Product not found." << endl;
//    }
//
//    vector<string> clothesProducts = catalog.getProductsByCategory("Clothes");
//    cout << "Products in the Clothes category:" << endl;
//    for (int i = 0; i < clothesProducts.size(); ++i) {
//        cout << "- " << clothesProducts[i] << endl;
//    }
//
//    return 0;
//}
//
//#include "ShoppingCart.h"
//
//int main() {
//    ShoppingCart cart(123);
//
//    cart.addItem("Shirt", 2);
//    cart.addItem("Jeans", 1);
//    cart.addItem("Socks", 5);
//
//    cart.removeItem("Jeans");
//    cart.removeItem("Hat");
//
//    cart.updateItemQuantity("Shirt", 3);
//    cart.updateItemQuantity("Hat", 2);
//
//    double totalPrice = cart.getTotalPrice();
//    cout << "Total price: $" << totalPrice << endl;
//
//    cart.checkout();
//
//    return 0;
//}
//
//#include "Manufacturer.h"
//
//int main()
//{
//    Manufacturer m1;
//
//    m1.setManufacturerID(123);
//    m1.setName("Apple");
//    m1.addProduct("iPhone");
//    m1.addProduct("Macbook");
//    m1.removeProduct("Macbook");
//
//    cout << "Manufacturer ID: " << m1.getManufacturerID() << endl;
//    cout << "Name: " << m1.getName() << endl;
//
//    cout << "Products: ";
//    for (auto i : m1.getProducts()) {
//        cout << i << ", ";
//    }
//    cout << endl;
//
//    
//}
//
//
//#include "LuckyPurchase.h"
//
//int main() {
//    LuckyPurchase lp;
//
//    lp.setPreviousOrderID(5555);
//    lp.suggestLuckyPurchase();
//
//    lp.setPreviousOrderID(333);
//    lp.suggestLuckyPurchase();
//
//    lp.setPreviousOrderID(1234);
//    lp.suggestLuckyPurchase();
//
//    return 0;
//}