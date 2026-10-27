#include <iostream>
using namespace std;
class CloudResource {
public:
    virtual void calculateCost(double cpuHours) {
        cout << "Calculating resource cost..." << endl;
    }
};
class StandardInstance : public CloudResource {
public:
    void calculateCost(double cpuHours) override {
        double cost = cpuHours * 5.0;
        if (cpuHours > 100) {
            cost *= 0.85;
        }
        cout << "Standard Instance Cost: Rs. " << cost << endl;
    }
};

class PremiumInstance : public CloudResource {
public:
    void calculateCost(double cpuHours) override {
        double cost = cpuHours * 12.0;
        if (cpuHours > 100) {
            cost *= 0.85;
        }
        cout << "Premium Instance Cost: Rs. " << cost << endl;
    }
};

int main() {
    StandardInstance stdInst;
    PremiumInstance premInst;

    stdInst.calculateCost(120);
    premInst.calculateCost(120);

    return 0;
}