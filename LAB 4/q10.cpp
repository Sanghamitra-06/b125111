#include <iostream>
#include <string>
using namespace std;
class SmartDevice {
private:
    string deviceName;
    string deviceType;
    bool powerStatus;
public:
    SmartDevice(string name, string type, bool power) {
        deviceName = name;
        deviceType = type;
        powerStatus = power;
    }
        friend class HomeController;
};
class HomeController {
public:
    void displayDeviceInformation(const SmartDevice& sd) {
        cout << "Device Name: " << sd.deviceName << endl;
        cout << "Device Type: " << sd.deviceType << endl;
        displayCurrentPowerStatus(sd);
    }
    void turnDeviceON(SmartDevice& sd) {
        sd.powerStatus = true;
        cout << sd.deviceName << " has been turned ON." << endl;
    }
    void turnDeviceOFF(SmartDevice& sd) {
        sd.powerStatus = false;
        cout << sd.deviceName << " has been turned OFF." << endl;
    }
    void displayCurrentPowerStatus(const SmartDevice& sd) {
        cout << "Power Status: " << (sd.powerStatus ? "ON" : "OFF") << endl;
    }
};

int main() {
    SmartDevice l("Dining Room Light", "Bulb", false);
    HomeController hc;
    hc.displayDeviceInformation(l);
    cout << endl;
    hc.turnDeviceON(l);
    hc.displayCurrentPowerStatus(l);
    return 0;
}
