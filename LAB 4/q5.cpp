#include <iostream>
#include <string>
using namespace std;
class FoodOrder {
private:
    int orderID;
    string foodItem;
    int quantity;
    double price;
public:
    FoodOrder(int id, string item, int qty, double prc) {
        orderID = id;
        foodItem = item;
        quantity = qty;
        price = prc;
    }

    friend void calculateBill(const FoodOrder& order);
};
void calculateBill(const FoodOrder& order) {
    double totalBill = order.quantity * order.price;
    cout << "Order ID: " << order.orderID << endl;
    cout << "Food Item: " << order.foodItem << endl;
    cout << "Quantity: " << order.quantity << endl;
    cout << "Price per item: " << order.price << endl;
    cout << "Total Bill: " << totalBill << endl;
}
int main() {
    FoodOrder order1(100, "pizza", 2, 160);
    calculateBill(order1);
    return 0;
}
