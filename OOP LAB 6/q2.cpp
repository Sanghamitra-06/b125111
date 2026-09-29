#include <iostream>
using namespace std;
class Complex {
    int real;
    int imag;
public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}
    Complex operator-(const Complex& c) {
        return Complex(real - c.real, imag - c.imag);
    }
    void display() const {
        if (imag >= 0) {
            cout << real << " + " << imag << "i" << endl;
        } else {
            cout << real << " - " << -imag << "i" << endl;
        }
    }
};
int main() {
    Complex c1(8, 5);
    Complex c2(3, 2);
    Complex result = c1 - c2;
    cout << "Result: ";
    result.display();
    return 0;
}
