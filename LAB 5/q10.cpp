#include <iostream>
using namespace std;

int Sum(int a, int b) {
    return a + b;
}

double Sum(int a, double b) {
    return a + b;
}

double Sum(double a, double b) {
    return a + b;
}

int Sum(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

int Sum(int* ptr1, int* ptr2) {
    return *ptr1 + *ptr2;
}

int main() {
    int int1 = 10, int2 = 20;
    double dbl1 = 5.5, dbl2 = 4.5;
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    cout << "Two integers: " <<Sum(int1, int2) << endl;
    cout << "Integer and floating-point: " <<Sum(int1, dbl1) << endl;
    cout << "Two floating-point values: " << Sum(dbl1, dbl2) << endl;
    cout << "Integer array: " << Sum(arr, size) << endl;
    cout << "Two integer pointers: " << Sum(&int1, &int2) << endl;

    return 0;
}
