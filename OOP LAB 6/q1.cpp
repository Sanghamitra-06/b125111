#include <iostream>
using namespace std;
class Distance {
    int feet;
    int inches;
public:
    Distance(int f = 0, int i = 0) : feet(f), inches(i) {}
    Distance operator+(const Distance& d) {
        int total_feet = feet + d.feet;
        int total_inches = inches + d.inches;
        if (total_inches >= 12) {
            total_feet += total_inches / 12;
            total_inches = total_inches % 12;
        }
        return Distance(total_feet, total_inches);
    }

    void display() const {
        cout<<feet<<"feet"<<inches<<"inches"<<endl;
    }
};
int main() {
    Distance d1(5, 8);
    Distance d2(3, 7);
    Distance result = d1 + d2;
    cout << "Result: ";
    result.display();
    return 0;
}
