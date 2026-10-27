#include <iostream>
using namespace std;
class Delivery {
public:
    virtual void estimateTime(double distance) {
        cout << "Estimating delivery time..." << endl;
    }
};
class BikeDelivery : public Delivery {
public:
    void estimateTime(double distance) override {
        double time = (distance / 20.0) * 60.0 + 5.0;
        cout << "Bike Delivery Time: " << time << " minutes" << endl;
    }
};
class DroneDelivery : public Delivery {
public:
    void estimateTime(double distance) override {
        double time = (distance / 40.0) * 60.0 + 2.0;
        cout << "Drone Delivery Time: " << time << " minutes" << endl;
    }
};
int main() {
    BikeDelivery bike;
    DroneDelivery drone;
    bike.estimateTime(10.0);
    drone.estimateTime(10.0);
    return 0;
}