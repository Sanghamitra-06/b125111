#include <iostream>
#include <string>
using namespace std;
class Vehicle {
protected:
    string registrationNumber;
    int rentalDays;
public:
    Vehicle(string regNum, int days) : registrationNumber(regNum), rentalDays(days) {}
};
class Car : public Vehicle {
protected:
    double dailyRate;
public:
    Car(string regNum, int days, double rate) : Vehicle(regNum, days), dailyRate(rate) {}
};
class LuxuryCar : public Car {
private:
    double luxuryCharge;
public:
    LuxuryCar(string regNum, int days, double rate, double charge) 
        : Car(regNum, days, rate), luxuryCharge(charge) {}

    void displayTotalCost() {
        double totalCost = (dailyRate + luxuryCharge) * rentalDays;
        cout << "Registration Number: " << registrationNumber << "\n";
        cout << "Rental Duration: " << rentalDays << " days\n";
        cout << "Daily Base Rate: " << dailyRate << "\n";
        cout << "Daily Luxury Charge: " << luxuryCharge << "\n";
        cout << "Total Rental Cost: " << totalCost << "\n";
    }
};
int main() {
    LuxuryCar myLuxuryCar("OD-GH-0097", 5, 50.0, 25.0);
    myLuxuryCar.displayTotalCost();
    return 0;
}
