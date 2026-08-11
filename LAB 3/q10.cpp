#include <iostream>
#include <string>

using namespace std;

class Employee {
    int employeeID;
    string employeeName;
    double basicSalary;
    double* monthlyEarnings;
    int numMonths;

public:
    Employee() {
        monthlyEarnings = nullptr;
        numMonths = 0;
    }

    void acceptDetails() {
        cout << "Enter Employee ID: ";
        cin >> employeeID;
        cout << "Enter Employee Name: ";
        cin>> employeeName;
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
        cout << "Enter the number of months for analysis: ";
        cin >> numMonths;
    }

    void allocateEarningsMemory() {
        monthlyEarnings = new double[numMonths];
    }

    void acceptMonthlyEarnings() {
        cout << "Enter earnings for " << numMonths << " months:" << endl;
        for (int i = 0; i < numMonths; ++i) {
            cout << "Month " << (i + 1) << ": ";
            cin >> monthlyEarnings[i];
        }
    }

    void displayAnalysis() const {
        double totalEarnings = 0;
        double highestEarning = monthlyEarnings[0];
        int highestMonth = 1;

        for (int i = 0; i < numMonths; ++i) {
            totalEarnings += monthlyEarnings[i];
            if (monthlyEarnings[i] > highestEarning) {
                highestEarning = monthlyEarnings[i];
                highestMonth = i + 1;
            }
        }
        double averageEarnings = totalEarnings / numMonths;

        cout << "\n--- Employee Salary Analysis ---" << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Basic Salary: $" << basicSalary << endl;
        cout << "Total Earnings: $" << totalEarnings << endl;
        cout << "Average Monthly Earning: $" << averageEarnings << endl;
        cout << "Highest Earning Month: Month " << highestMonth << " ($" << highestEarning << ")" << endl;
    }

    void releaseMemory() {
        delete[] monthlyEarnings;
        monthlyEarnings = nullptr;
    }
};

int main() {
    Employee emp;
    emp.acceptDetails();
    emp.allocateEarningsMemory();
    emp.acceptMonthlyEarnings();
    emp.displayAnalysis();
    emp.releaseMemory();

    return 0;
}
