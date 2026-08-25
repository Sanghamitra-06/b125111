#include <iostream>
using namespace std;
void display(int val) {
    cout << "Integer: " << val << endl;
}
void display(double val) {
    cout << "Floating-point: " << val << endl;
}
void display(char val) {
    cout << "Character: " << val << endl;
}
void display(int arr[], int size) {
    cout << "Integer Array: ";
    for (int i = 0;i < size; i++) {
        cout << arr[i];
    }
    cout << endl;
}
void display(char arr[], int size) {
    cout << "Character Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i];
    }
    cout << endl;
}
int main() {
    int intVal = 100;
    double doubleVal = 45.67;
    char charVal = 'S';
    int intArr[] = {10, 20, 30, 40};
    char charArr[] = {'s', 'n', 'e', 'h', 'a'};

    display(intVal);
    display(doubleVal);
    display(charVal);
    display(intArr, 4);
    display(charArr, 5);

    return 0;
}
