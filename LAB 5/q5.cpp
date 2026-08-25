#include <iostream>
using namespace std;
int modify(int current, int Add) {
    return current + Add;
}
double modify(double current, double Add) {
    return current + Add;
}
void modify(int* ptr, int newVal) {
    *ptr = newVal;
}
int main() {
    int intVal = 10;
    double doubleVal = 5.5;
    int ptrVal = 20;
    cout << "Integer before: " << intVal << "  After adding: " << modify(intVal, 5) << endl;
    cout << "Double before: " << doubleVal << " After adding: " << modify(doubleVal, 2.2) << endl;
    cout << "Pointer value before: " << ptrVal;
    modify(&ptrVal,100);
    cout << "After pointer modification: " << ptrVal << endl;
    return 0;
}
