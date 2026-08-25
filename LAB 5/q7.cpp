#include <iostream>
using namespace std;
void compare(int a, int b) {
    if (a > b) {
        cout << "Larger value: " << a << endl;
    } else {
        cout << "Larger value: " << b << endl;
    }
}
void compare(double a, double b) {
    if (a > b) {
        cout << "Larger value: " << a << endl;
    } else {
        cout << "Larger value: " << b << endl;
    }
}
void compare(int arr1[], int arr2[], int size) {
    bool identical = true;
    for (int i = 0; i < size; i++) {
        if (arr1[i] != arr2[i]) {
            identical = false;
            break;
        }
    }
    if (identical) {
        cout << "Arrays contain identical elements." << endl;
    } else {
        cout << "Arrays do not contain identical elements." << endl;
    }
}
int main() {
    compare(15, 42);
    compare(23.5, 12.8);
    int arrayA[] = {1, 2, 3, 4};
    int arrayB[] = {1, 2, 3, 4};
    int arrayC[] = {1, 5, 3, 4};
    compare(arrayA, arrayB, 4);
    compare(arrayA, arrayC, 4);
    return 0;
}
