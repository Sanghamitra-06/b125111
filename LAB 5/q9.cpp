#include <iostream>
using namespace std;

int findMax(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
int findMax(int* ptr1, int* ptr2) {
    if (*ptr1 > *ptr2) {
        return *ptr1;
    } else {
        return *ptr2;
    }
}

int findMax(int* arr, int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int main() {
    int val1 = 45;
    int val2 = 72;
    int intArr[] = {14, 56, 89, 32, 47};

    cout << "Max between two integers: " << findMax(val1, val2) << endl;
    cout << "Max through pointers: " << findMax(&val1, &val2) << endl;
    cout << "Max among array elements: " << findMax(intArr, 5) << endl;

    return 0;
}
