#include <iostream>
#include <string>
using namespace std;
class Item {
    string name;
    double price;
    int quantity;
public:
    Item(string n = "", double p = 0.0, int q = 0) : name(n), price(p), quantity(q) {}
    Item operator+(const Item& other) const {
        if (name == other.name && price == other.price) {
            return Item(name, price, quantity + other.quantity);
        } else {
            cout << "Error: Cannot combine items with different names or prices!" << endl;
            return Item("", 0.0, 0);
        }
    }
    void display() const {
        if (!name.empty()) {
            cout << "Item: " << name << " | Price:" << price << " | Quantity: " << quantity << endl;
        }
    }
};
int main() {
    Item item1("Laptop", 999.99, 5);
    Item item2("Laptop", 999.99, 3);
    Item item3("Mouse", 25.00, 10);
    cout << "Attempting to combine matching items:" << endl;
    Item combinedResult = item1 + item2;
    combinedResult.display();
    cout << "\nAttempting to combine mismatched items:" << endl;
    Item failedResult = item1 + item3;

    return 0;
}
