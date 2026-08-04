#include <iostream>

using namespace std;

class Distance {

    int feet;
    int inches;

public:
    
    void inputDistance() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

   
    void addDistances(Distance d1, Distance d2) {
        inches = d1.inches + d2.inches;
        feet = d1.feet + d2.feet + (inches / 12); 
        inches = inches % 12;                    
    }

   
    void displayDistance() {
        cout << feet << " ft " << inches << " in\n";
    }
};

int main() {
    Distance d1, d2, d3;

    cout << "Enter First Distance \n";
    d1.inputDistance();

    cout << "\nEnter Second Distance \n";
    d2.inputDistance();

    d3.addDistances(d1, d2);

    cout << "\n--- Final Result ---\n";
    cout << "Distance 1: "; d1.displayDistance();
    cout << "Distance 2: "; d2.displayDistance();
    cout << "Total Sum:  "; d3.displayDistance();

    return 0;
}
