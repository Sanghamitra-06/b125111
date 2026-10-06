#include <iostream>
#include <string>
using namespace std;
class BankAccount {
protected:
    string accountNumber;
    double balance;
public:
    BankAccount(string accNum, double initialBalance) : accountNumber(accNum), balance(initialBalance) {}
};
class SavingsAccount : public BankAccount {
public:
    SavingsAccount(string accNum, double initialBalance) : BankAccount(accNum, initialBalance) {}

    void addInterest(double interestRatePercentage) {
        double interest = balance * (interestRatePercentage / 100.0);
        balance += interest;
    }

    void displayBalance() {
        cout << "Savings Account: " << accountNumber << " | Balance: $" << balance << "\n";
    }
};
class CurrentAccount : public BankAccount {
public:
    CurrentAccount(string accNum, double initialBalance) : BankAccount(accNum, initialBalance) {}
    void checkMaintenanceCharge(double minBalance, double charge) {
        if (balance < minBalance) {
            balance -= charge;
            cout << "Warning: Balance below minimum. Maintenance charge of $" << charge << " deducted.\n";
        }
    }

    void displayBalance() {
        cout << "Current Account: " << accountNumber << " | Balance: $" << balance << "\n";
    }
};

int main() {
    SavingsAccount savings("SAV123", 1000.0);
    CurrentAccount current("CUR456", 400.0);

    savings.addInterest(5.0);
    savings.displayBalance();

    current.checkMaintenanceCharge(500.0, 50.0);
    current.displayBalance();

    return 0;
}
