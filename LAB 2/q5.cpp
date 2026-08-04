#include <iostream>
#include <string>

using namespace std;

class Employee {

    string employeeID;
    string employeeName;
    double basicSalary;
    double hra;
    double da;
    double grossSalary;

public:
    
    void acceptDetails() {
        cout << "Enter Employee ID: ";
        cin >> employeeID;
        cin.ignore(); 
        cout << "Enter Employee Name: ";
        getline(cin, employeeName);
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    
    void calculateSalary() {
        hra = 0.20 * basicSalary; 
        da = 0.10 * basicSalary;  
        grossSalary = basicSalary + hra + da;
    }

    
    void displaySalaryDetails() {
        cout << "\n--- Salary Breakdown ---\n";
        cout << "Employee ID:   " << employeeID << "\n";
        cout << "Employee Name: " << employeeName << "\n";
        cout << "Basic Salary:  $" << basicSalary << "\n";
        cout << "HRA (20%):     $" << hra << "\n";
        cout << "DA (10%):      $" << da << "\n";
        cout << "Gross Salary:  $" << grossSalary << "\n";
        
    }
};

int main() {
    Employee emp;

    cout << "--- Enter Employee Data ---\n";
    emp.acceptDetails();
    
    
    emp.calculateSalary();
    
    emp.displaySalaryDetails();

    return 0;
}
