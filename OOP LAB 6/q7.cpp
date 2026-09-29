#include <iostream>
using namespace std;
class Date {
    int day;
    int month;
    int year;
public:
    Date(int d = 1, int m = 1, int y = 2000) : day(d), month(m), year(y) {}
    bool operator==(const Date& d) const {
        return (day == d.day && month == d.month && year == d.year);
    }
};
int main() {
    Date date1(15, 8, 2026);
    Date date2(15, 8, 2026);
    if (date1 == date2) {
        cout << "Output: Both dates are equal." << endl;
    } else {
        cout << "Output: Dates are not equal." << endl;
    }
    return 0;
}
