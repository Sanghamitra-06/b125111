#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements (n): ";
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
   cout << "The elements in the dynamic array are: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    delete[] arr;
    arr = nullptr;
    
    return 0;
}
