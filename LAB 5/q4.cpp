#include <iostream>
using namespace std;
int search(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}
int search(char arr[], int size, char target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}
int search(int arr[], int startIdx, int endIdx, int target) {
    for (int i = startIdx; i <= endIdx; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}
int main() {
    int intArr[] = {10, 20, 30, 40, 50};
    char charArr[] = {'a', 'b', 'c', 'd'};
    int p1 = search(intArr, 5, 30);
    if (p1 != -1) cout << "Integer found at index: " << p1 << endl;
    else cout << "Integer not found" << endl;
    int p2 = search(charArr, 4, 'c');
    if (p2 != -1) cout << "Character found at index: " << p2 << endl;
    else cout << "Character not found" << endl;
    int p3 = search(intArr, 1, 3, 40);
    if (p3 != -1) cout << "Integer found in range at index: "<<p3<< endl;
    else cout << "Integer not found in range" << endl;
    return 0;
}
