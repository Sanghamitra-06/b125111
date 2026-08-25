#include <iostream>
using namespace std;
int calculate(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}
double calculate(double arr[], int size) {
    double total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}
int calculate(int arr[], int size, int portionSize) {
    int total = 0;
    for (int i = 0; i < portionSize; i++) {
        total += arr[i];
    }
    return total;
}
int main(){
    int intArr[] = {1, 2, 3, 4, 5};
    double doubleArr[] = {1.1, 2.2, 3.3, 4.4};
    cout << "Integer array total: " << calculate(intArr, 5) << endl;
    cout << "Floating-point array total: " << calculate(doubleArr, 4) << endl;
    cout << "Portion of integer array total : " << calculate(intArr, 5, 3) << endl;
    return 0;
}
