#include <iostream>
using namespace std;
int findLarger(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
double findLarger(double a, double b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
int findLarger(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}
int main() {
    cout << "Larger of two integers: " << findLarger(12, 25) << endl;
    cout << "Larger of two floating-point numbers: " << findLarger(14.5, 8.2) << endl;
    cout << "Larger of three integers: " << findLarger(45, 72, 31) << endl;
    return 0;
}
