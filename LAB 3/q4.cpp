#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of floating-point numbers (n): ";
    cin >> n;
    if (n <= 0) {
        cout << "Invalid size.\n";
        return 1;
    }
    float* arr = new float[n];
    cout << "Enter " << n << " floating-point numbers:\n";
    float sum = 0.0;
    for (int i = 0; i < n; ++i) {
        cout << "Number [" << i << "]: ";
        cin >> arr[i];
        sum += arr[i];
    }
    float average = sum / n;
    cout << "Sum: " << sum << "\n";
    cout << "Average: " << average << "\n";
    delete[] arr;
    arr = nullptr;
    
    return 0;
}
