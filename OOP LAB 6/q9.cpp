#include <iostream>
using namespace std;
class Temperature {
    double celsius;
public:
    Temperature(double c = 0.0) : celsius(c) {}
    bool operator<(const Temperature& t) const {
        return celsius < t.celsius;
    }
    bool operator>(const Temperature& t) const {
        return celsius > t.celsius;
    }
    double getCelsius() const {
        return celsius;
    }
};

int main() {
    Temperature t1(25.5);
    Temperature t2(30.0);
    if (t1 < t2) {
        cout << t1.getCelsius() << " C is lower than " << t2.getCelsius() << " C" << endl;
    } else if (t1 > t2) {
        cout << t1.getCelsius() << " C is higher than " << t2.getCelsius() << " C" << endl;
    } else {
        cout << t1.getCelsius() << " C is equal to " << t2.getCelsius() << " C" << endl;
    }

    return 0;
}
