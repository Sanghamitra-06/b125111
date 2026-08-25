#include <iostream>
using namespace std;
int calculate(int a, int b) {
    return a + b;
}
int calculate(int a, int b, int c) {
    return a + b + c;
}
double calculate(double a, double b) {
    return a + b;
}
int main() {
    cout << "Two integers : " << calculate(5, 10) << endl;
    cout << "Three integers: " << calculate(5, 10, 15) << endl;
    cout << "Two floating-point values: " << calculate(5.4, 10.5) << endl;
    return 0;
}
