#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of parking slots: ";
    cin >> n;
    int* slots = new int[n];
    cout << "Enter status for " << n << " slots (0 available,1 occupied):" << endl;
    for (int i = 0; i < n; i++) {
        cin >> slots[i];
    }
    int available = 0;
    int occupied = 0;
    int* ptr = slots;
    for (int i = 0; i < n; i++) {
        if (*ptr == 0) {
            available++;
        } else if (*ptr == 1) {
            occupied++;
        }
        ptr++;
    }
    cout << "Available slots: " << available << endl;
    cout << "Occupied slots: " << occupied << endl;

    delete[] slots;
    return 0;
}
