#include <iostream>
using namespace std;
class SecurityScanner {
public:
    virtual void scan(int threats) {
        cout << "Scanning for threats..." << endl;
    }
};
class BasicScanner : public SecurityScanner {
public:
    void scan(int threats) override {
        cout << "Basic Scanner - Threats Detected: " << threats << endl;
    }
};
class AdvancedScanner : public SecurityScanner {
public:
    void scan(int threats) override {
        int remaining = threats - (int)(threats * 0.90);
        cout << "Advanced Scanner - Threats Detected: " << threats << ", Remaining: " << remaining << endl;
    }
};

int main() {
    BasicScanner basic;
    AdvancedScanner adv;
    basic.scan(50);
    adv.scan(50);
    return 0;
}