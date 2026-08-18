#include <iostream>
#include <string>
using namespace std;
class Door {
private:
    int doorNumber;
    bool isLocked;
public:
    Door(int num, bool locked) {
        doorNumber = num;
        isLocked = locked;
    }
        friend class SecuritySystem;
};
class SecuritySystem {
public:
    void checkLockStatus(const Door& d) {
        cout << "Door Number: " << d.doorNumber << endl;
        if (d.isLocked) {
            cout << "Status: Locked" << endl;
        } else {
            cout << "Status: Unlocked" << endl;
        }
    }
};

int main() {
    Door frontDoor(20, true);
    SecuritySystem sys;
    sys.checkLockStatus(frontDoor);
    return 0;
}
