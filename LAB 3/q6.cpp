#include <iostream>
#include <string>
using namespace std;

class Employee {
    int employeeID;
    string employeeName;
    double salary;

public:
    void acceptDetails() {
        cout << "Enter Employee ID: ";
        cin >> employeeID;
        cout << "Enter Employee Name: ";
       cin>> employeeName;
        cout << "Enter Salary: ";
        cin >> salary;
    }
    void displayDetails()  {
        cout << "ID: " << employeeID 
                  << " Name: " << employeeName 
                  << " Salary: " << salary << "\n";
    }
};

int main() {
    int n;
    cout << "Enter the number of employees (n): ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Invalid number of employees.\n";
        return 1;
    }
    
   
    Employee* employeeArray = new Employee[n];
    
    
    for (int i = 0; i < n; ++i) {
        cout << "\nEnter details for Employee " << (i + 1) << ":\n";
        employeeArray[i].acceptDetails();
    }
    cout << "\n All Employee Details \n";
    for (int i = 0; i < n; ++i) {
        employeeArray[i].displayDetails();
    }
    delete[] employeeArray;
    employeeArray = nullptr;
    
    return 0;
}
