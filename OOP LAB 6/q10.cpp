#include <iostream>
#include <string>
using namespace std;
class Product {
    string name;
    double price;
    int quantity;
public:
    Product(string n = "", double p = 0.0, int q = 0) : name(n), price(p), quantity(q) {}
    Product operator+(const Product& p) const {
        if (name == p.name && price == p.price) {
            return Product(name, price, quantity + p.quantity);
        } else {
            cout << "Error: Products have different names or prices." << endl;
            return Product("", 0.0, 0);
        }
    }
    bool operator>(const Product& p) const {
        return (price * quantity) > (p.price * p.quantity);
    }
    void display() const {
        cout << "Product: " << name << " | Total Value: " << (price * quantity) << endl;
    }
};

int main() {
    Product prod1("Book", 15.0, 3);
    Product prod2("Book", 15.0, 2);
    Product prod3("Pen", 5.0, 10);
    Product combined = prod1 + prod2;
    cout << "Combined: ";
    combined.display();
    if (prod3 > prod1) {
        cout << "Pens have a higher total value than the first set of books." << endl;
    } else {
        cout << "The first set of books has a higher or equal total value." << endl;
    }
    return 0;
}
