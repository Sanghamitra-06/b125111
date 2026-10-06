#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
public:
    Person(string n) : name(n) {
        cout << "Person constructor" << "\n";
    }
};
class Employee : public Person {
protected:
    int employeeID;
public:
    Employee(string n, int id) : Person(n), employeeID(id) {
        cout << "Employee constructor" << "\n";
    }
};
class Manager : public Employee {
private:
    string department;
public:
    Manager(string n, int id, string dept) : Employee(n, id), department(dept) {
        cout << "Manager constructor" << "\n";
    }

    void displayInfo() {
        cout << "\n Initialized Information" << "\n";
        cout << "Name: " << name << "\n";
        cout << "Employee ID: " << employeeID << "\n";
        cout << "Department: " << department << "\n";
    }
};

int main() {
    Manager mgr("Sanukta", 501, "Engineering");
    mgr.displayInfo();
    return 0;
}
