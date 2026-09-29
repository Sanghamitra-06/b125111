#include <iostream>
using namespace std;
class Time {
    int hours;
    int minutes;
public:
    Time(int h = 0, int m = 0) : hours(h), minutes(m) {}
    Time operator+(const Time& t) const {
        int total_hours = hours + t.hours;
        int total_minutes = minutes + t.minutes;
        if (total_minutes >= 60) {
            total_hours += total_minutes / 60;
            total_minutes = total_minutes % 60;
        }
        return Time(total_hours, total_minutes);
    }
    void display() const {
        cout << hours << " hours " << minutes << " minutes" << endl;
    }
};
int main() {
    Time t1(4, 45);
    Time t2(2, 30);
    Time result = t1 + t2;
    cout << "Result: ";
    result.display();
    return 0;
}
