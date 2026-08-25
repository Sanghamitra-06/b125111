#include <iostream>
using namespace std;

int count(int num) {
    if (num == 0) {
        return 1;
    }
    int digitCount = 0;
    if (num < 0) {
        num = -num;
    }
    while (num > 0) {
        digitCount++;
        num /= 10;
    }
    return digitCount;
}

int count(int arr[], int size) {
    return size;
}

int count(char arr[], int size, char target) {
    int occurrenceCount = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            occurrenceCount++;
        }
    }
    return occurrenceCount;
}
int main() {
    int intArr[] = {10, 20, 30, 40, 50, 60};
    char charArr[] = {'a', 'b', 'a', 'c', 'a', 'd'};

    cout << "Number of digits: " << count(123456) << endl;
    cout << "Number of elements in array: " << count(intArr, 6) << endl;
    cout << "Occurrences of 'a': " << count(charArr, 6, 'a') << endl;

    return 0;
}
