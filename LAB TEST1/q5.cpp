#include <iostream>
using namespace std;

void updateVisitors(int *count) {
    int incoming;
    cout << "Enter number of newly arrived visitors: ";
    cin >> incoming;
    *count += incoming;
}
int main() {
    int visitorCount = 100;
    cout << "Visitor count before update: " << visitorCount << endl;
    updateVisitors(&visitorCount);
    cout << "Visitor count after update: " << visitorCount << endl;

    return 0;
}
