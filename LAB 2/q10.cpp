#include <iostream>
#include <string>

using namespace std;

class ElectricityBill {

    string consumerNumber;
    string consumerName;
    double unitsConsumed;
    double totalBill;

public:
    
    void acceptDetails() {
        cout << "Enter Consumer Number: ";
        cin >> consumerNumber;
        cout << "Enter Consumer Name: ";
        cin.ignore();
        getline(cin, consumerName);
        cout << "Enter Units Consumed: ";
        cin >> unitsConsumed;
    }

    
    void calculateBill() {
        double units = unitsConsumed;
        totalBill = 0.0;

        if (units <= 100) {
            totalBill = units * 5;
        } else if (units <= 200) {
            totalBill = (100 * 5) + ((units - 100) * 7);
        } else {
            totalBill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
        }
    }

   
    void displayBill() {
        
        cout << "         ELECTRICITY BILL          \n";
       
        cout << "Consumer Number : " << consumerNumber << "\n";
        cout << "Consumer Name   : " << consumerName << "\n";
        cout << "Units Consumed  : " << unitsConsumed << "\n";
       
        cout << "Total Bill Amount: Rs. " << totalBill << "\n";
        
    }
};

int main() {
    ElectricityBill bill;
    bill.acceptDetails();
    bill.calculateBill();
    bill.displayBill();
    return 0;
}
