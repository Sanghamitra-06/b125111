#include <iostream>
#include <string>

using namespace std;

class Mobile {
private:
    string brand;
    string model;
    int batteryPercentage;
public:
    Mobile(string b, string m, int battery) {
        brand = b;
        model = m;
        batteryPercentage = battery;
    }

    friend void checkBattery(const Mobile& phone);
};

void checkBattery(const Mobile& phone) {
    cout << "Brand: " << phone.brand << endl;
    cout << "Model: " << phone.model << endl;
    cout << "Battery Percentage: " << phone.batteryPercentage << "%" << endl;
    
    if (phone.batteryPercentage < 20) {
        cout << "Battery Low" << endl;
    } else {
        cout << "Battery Normal" << endl;
    }
}

int main() {
    Mobile phone1("Vivo", "y50", 92);
    checkBattery(phone1);
    cout << endl;
    Mobile phone2("Iphone", "16", 20);
    checkBattery(phone2);
    return 0;
}
