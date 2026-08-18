#include <iostream>
#include <string>
using namespace std;
class ParkingSlot {
private:
    int slotNumber;
    string vehicleNumber;
    bool isOccupied;
public:
    ParkingSlot(int slot, string vehicle, bool occupied) {
        slotNumber = slot;
        vehicleNumber = vehicle;
        isOccupied = occupied;
    }

    friend void checkSlot(const ParkingSlot& slot);
};
void checkSlot(const ParkingSlot& slot) {
    cout << "Slot Number: " << slot.slotNumber << endl;
    if (slot.isOccupied) {
        cout << "Status: Occupied" << endl;
        cout << "Vehicle Number: " << slot.vehicleNumber << endl;
    } else {
        cout << "Status: Available" << endl;
    }
}
int main() {
    ParkingSlot slot1(101, "OD-23-097", true);
    checkSlot(slot1);
    cout << endl;
    ParkingSlot slot2(102, "", false);
    checkSlot(slot2);
    return 0;
}
