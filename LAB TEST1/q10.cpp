#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of student IDs: ";
    cin >> n;
    int* ids = new int[n];
    cout << "Enter " << n << " student IDs:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> *(ids + i);
    }
    int search_id;
    cout << "Enter the student ID to search for: ";
    cin >> search_id;
    int* ptr = ids;
    int position = -1;
    for (int i = 0; i < n; i++) {
        if (*ptr == search_id) {
            position = i;
            break;
        }
        ptr++;
    }
    if (position != -1) {
        cout << "ID " << search_id << " found at index position " << position << endl;
    } else {
        cout << "ID " << search_id << " not found." << endl;
    }

    delete[] ids;
    return 0;
}
