#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    if (n <= 0) {
        cout << "Invalid array size.\n";
        return 1;
    }
    int* arr = new int[n];
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n;i++) {
        cout << "Element [" << i << "]: ";
        cin >> arr[i];
    }
    int* ptr = arr;
    int largest = *ptr;
    for (int i = 1; i < n;i++) {
        ptr++; 
        if (*ptr > largest) {
            largest = *ptr;
        }
    }
    cout <<"The largest element in the array is:"<< largest << "\n";
    delete[] arr;
    arr = nullptr;
    return 0;
}
