#include <iostream>
using namespace std;

int main() {
    int parcels = 120; 
    int* ptr = &parcels; 
    int incoming;
    cout << "Initial number of parcels: " << *ptr << endl;
    cout << "Enter the number of new parcels to add: ";
    cin >> incoming;
    *ptr += incoming;
    cout << "Updated number of parcels: " << *ptr << endl;

    return 0;
}
