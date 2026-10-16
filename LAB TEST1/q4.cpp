#include <iostream>
using namespace std;

int main() {
    int seats[8] = {10, 11, 12, 13, 14, 15, 16, 17};
    int position, new_number;
    cout << "Initial seat numbers: ";
    for (int i = 0; i < 8; i++) {
        cout << *(seats + i) << " ";
    }
    cout << endl;
    cout << "Enter the position (0 to 7) to update: ";
    cin >> position;
    if (position >= 0 && position < 8) {
        cout << "Enter the new seat number: ";
        cin >> new_number;
        *(seats + position) = new_number;
        cout << "Updated seat numbers: ";
        for (int i = 0; i < 8; i++) {
            cout << *(seats + i) << " ";
        }
        cout << endl;
    } else {
        cout << "Invalid pos" << endl;
    }

    return 0;
}
