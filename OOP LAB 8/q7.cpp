#include <iostream>
#include <cmath>
using namespace std;
class MatchFormat {
public:
    virtual void calculateTarget(int firstInningsScore) {
        cout << "Calculating target..." << endl;
    }
};
class T20Match : public MatchFormat {
public:
    void calculateTarget(int firstInningsScore) override {
        int margin = ceil(firstInningsScore * 0.01);
        int target = firstInningsScore + margin;
        cout << "T20 Match Target: " << target << endl;
    }
};
class ODIMatch : public MatchFormat {
public:
    void calculateTarget(int firstInningsScore) override {
        int margin = ceil(firstInningsScore * 0.02);
        int target = firstInningsScore + margin;
        cout << "ODI Match Target: " << target << endl;
    }
};

int main() {
    T20Match t20;
    ODIMatch odi;

    t20.calculateTarget(185);
    odi.calculateTarget(275);

    return 0;
}