#include <iostream>
using namespace std;
class IrrigationSystem {
public:
    virtual void calculateWater(double moisture) {
        cout << "Calculating water requirement..." << endl;
    }
};
class DripIrrigation : public IrrigationSystem {
public:
    void calculateWater(double moisture) override {
        double water = 2.0 * (100.0 - moisture);
        cout << "Drip Irrigation Water Required: " << water << " Litres" << endl;
    }
};
class SprinklerIrrigation : public IrrigationSystem {
public:
    void calculateWater(double moisture) override {
        double water = 3.0 * (100.0 - moisture);
        cout << "Sprinkler Irrigation Water Required: " << water << " Litres" << endl;
    }
};
int main() {
    DripIrrigation drip;
    SprinklerIrrigation sprinkler;

    drip.calculateWater(40.0);
    sprinkler.calculateWater(40.0);

    return 0;
}