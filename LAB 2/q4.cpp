#include <iostream>
#include <string>

using namespace std;

class BankAccount {

    string accountNumber;
    string accountHolderName;
    double balance;

public:
    
    void enterDetails() {
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cin.ignore(); 
        cout << "Enter Account Holder Name: ";
        getline(cin, accountHolderName);
        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Successfully deposited $" << amount << "\n";
        } else {
            cout << "Invalid deposit amount.\n";
        }
    }

    
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Transaction Failed: Insufficient balance!\n";
        } else if (amount <= 0) {
            cout << "Invalid withdrawal amount.\n";
        } else {
            balance -= amount;
            cout << "Successfully withdrew $" << amount << "\n";
        }
    }

    
    void displayDetails() {
        cout << "\n--- Account Details ---\n";
        cout << "Account Number: " << accountNumber << "\n";
        cout << "Holder Name:    " << accountHolderName << "\n";
        cout << "Current Balance: $" << balance << "\n";
        cout << "-----------------------\n";
    }
};

int main() {
    BankAccount account;
    
    cout << "--- Create Account ---\n";
    account.enterDetails();
    account.displayDetails();

    cout << "\n--- Deposit Action ---\n";
    account.deposit(500.0);
    account.displayDetails();

    cout << "\n--- Withdrawal Action ---\n";
    account.withdraw(200.0);
    account.displayDetails();

    cout << "\n--- Failed Withdrawal Action ---\n";
    account.withdraw(10000.0); 

    return 0;
}
