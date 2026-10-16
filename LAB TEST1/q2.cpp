#include <iostream>
using namespace std;

int main() {
    double balance = 1000.50;
    double* ptr = &balance;  
    double deposit, withdrawal;
    cout << "Current Balance: $" << *ptr << endl;
    cout << "Enter amount to deposit: $";
    cin >> deposit;
    *ptr += deposit;
    cout << "Enter amount to withdraw: $";
    cin >> withdrawal;
    if (withdrawal <= *ptr) {
        *ptr -= withdrawal;
    } else {
        cout << "Insufficient balance for this withdrawal!" << endl;
    }
    cout << "Final Balance: $" << *ptr << endl;

    return 0;
}
