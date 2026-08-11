#include <iostream>
#include <string>

using namespace std;

class Product {
    int productID;
    string productName;
    double price;
    int quantity;

public:
    void acceptDetails() {
        cout << "Enter Product ID: ";
        cin >> productID;
        
        cout << "Enter Product Name: ";
       cin>> productName;
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    void displayDetails() const {
        cout << "ID: " << productID 
              << " | Name: " << productName 
              << " | Price: " << price 
              << " | Qty: " << quantity 
              << " | Subtotal: " << (price * quantity) << endl;
    }

    double getSubtotal() const {
        return price * quantity;
    }
};

int main() {
    int n;
    cout << "Enter the number of products (n): ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number of products." << endl;
        return 1;
    }

    Product* cart = new Product[n];

    for (int i = 0; i < n; ++i) {
        cout << "\nEnter details for Product " << (i + 1) << ":" << endl;
        cart[i].acceptDetails();
    }

    cout << "\nShopping Cart Items" << endl;
    double totalAmount = 0;
    for (int i = 0; i < n; ++i) {
        cart[i].displayDetails();
        totalAmount += cart[i].getSubtotal();
    }

    cout << "\nTotal Amount: " << totalAmount << endl;

    delete[] cart;
    cart = nullptr;

    return 0;
}
