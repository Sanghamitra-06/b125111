#include <iostream>
#include <string>

using namespace std;

class Product {

    string productID;
    string productName;
    int quantityAvailable;
    double pricePerUnit;

public:
    
    void acceptProductDetails() {
        cout << "Enter Product ID: ";
        cin >> productID;
        cin.ignore(); // Clear buffer
        cout << "Enter Product Name: ";
        getline(cin, productName);
        cout << "Enter Quantity Available: ";
        cin >> quantityAvailable;
        cout << "Enter Price per Unit: ";
        cin >> pricePerUnit;
    }

    
    void displayProductDetails() {
        cout << "\n--- Product Details ---\n";
        cout << "ID:                 " << productID << "\n";
        cout << "Name:               " << productName << "\n";
        cout << "Stock Available:    " << quantityAvailable << "\n";
        cout << "Price per Unit:     $" << pricePerUnit << "\n";
        cout << "-----------------------\n";
    }

    
    void sellProduct(int unitsSold) {
        if (unitsSold > quantityAvailable) {
            cout << "\nError: Not enough stock! Only " << quantityAvailable << " units available.\n";
        } else if (unitsSold <= 0) {
            cout << "\nError: Invalid sale quantity.\n";
        } else {
            quantityAvailable -= unitsSold;
            cout << "\nSuccessfully sold " << unitsSold << " units.\n";
        }
    }

   
    void displayInventoryValue() {
        double totalValue = quantityAvailable * pricePerUnit;
        cout << "Total Inventory Value for " << productName << ": $" << totalValue << "\n";
    }
};

int main() {
    Product item;

    cout << "--- Setup Product Inventory ---\n";
    item.acceptProductDetails();
    item.displayProductDetails();

    cout << "\n--- Processing a Sale ---\n";
    cout << "Attempting to sell 5 units...\n";
    item.sellProduct(5);
    
    
    item.displayProductDetails();
    item.displayInventoryValue();

    return 0;
}
