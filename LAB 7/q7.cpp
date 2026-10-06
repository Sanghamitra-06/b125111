#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
    int age;
public:
    Person(string n, int a) : name(n), age(a) {}
};

class Student : virtual public Person {
protected:
    int rollNo;
    double cgpa;
public:
    Student(string n, int a, int r, double c) : Person(n, a), rollNo(r), cgpa(c) {}
};

class Employee : virtual public Person {
protected:
    string employeeID;
    double salary;
public:
    Employee(string n, int a, string id, double s) : Person(n, a), employeeID(id), salary(s) {}
};

class TeachingAssistant : public Student, public Employee {
public:
    TeachingAssistant(string n, int a, int r, double c, string id, double s)
        : Person(n, a), Student(n, a, r, c), Employee(n, a, id, s) {}

    void displayInfo() {
        cout << "--- Teaching Assistant Information ---\n";
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << " years\n";
        cout << "Roll No: " << rollNo << "\n";
        cout << "CGPA: " << cgpa << "\n";
        cout << "Employee ID: " << employeeID << "\n";
        cout << "Salary: " << salary << "\n";
    }
};

int main() {
    TeachingAssistant ta("Rashmita", 24, 401, 3.85, "TA999", 25000);
    ta.displayInfo();
    return 0;
}
