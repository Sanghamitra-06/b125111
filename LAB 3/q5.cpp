#include <iostream>
#include <string>
using namespace std;

class Student {
    int rollNumber;
    string name;
    float marks;

public:
    
    void acceptDetails() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks: ";
        cin >> marks;
    }
    void displayDetails() const {
        cout << "\n Student Details \n";
        cout << "Roll Number: " << rollNumber << "\n";
        cout << "Name: " << name << "\n";
        cout << "Marks: " << marks << "\n";
    }
};

int main() {
    
    Student* studentPtr = new Student();
    cout << "Enter details for the student:\n";
    studentPtr->acceptDetails();
    studentPtr->displayDetails();
    delete studentPtr;
    studentPtr = nullptr;
    return 0;
}
