#include <iostream>
using namespace std;
class ParkingSlot {
public:
    virtual void calculateFee(int hours) {
        cout << "Calculating fee..." << endl;
    }
};
class TwoWheelerSlot : public ParkingSlot {
public:
    void calculateFee(int hours) override {
        double fee = hours * 10.0;
        if (hours > 5) {
            fee *= 0.90;
        }
        cout << "Two-Wheeler Fee for " << hours << " hours: Rs. " << fee << endl;
    }
};
class FourWheelerSlot : public ParkingSlot {
public:
    void calculateFee(int hours) override {
        double fee = hours * 30.0;
        if (hours > 5) {
            fee *= 0.90;
        }
        cout << "Four-Wheeler Fee for " << hours << " hours: Rs. " << fee << endl;
    }
};

int main() {
    TwoWheelerSlot bike;
    FourWheelerSlot car;

    bike.calculateFee(6);
    car.calculateFee(4);

    return 0;
}