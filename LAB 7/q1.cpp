#include <iostream>
#include <string>
using namespace std;
class Employee {
protected:
    string name;
    double basicSalary;
public:
    Employee(string n, double s) : name(n), basicSalary(s) {}
};
class Developer : public Employee {
protected:
    int experience;
public:
    Developer(string n, double s, int exp) : Employee(n, s), experience(exp) {}
};
class SeniorDeveloper : public Developer {
private:
    double projectBonus;
public:
    SeniorDeveloper(string n, double s, int exp, double bonus) : Developer(n, s, exp), projectBonus(bonus) {}

    void displaySalary() {
        double expBonus = 0.05 * basicSalary * experience;
        double finalSalary = basicSalary + expBonus + projectBonus;
        cout << "Employee Name: " << name << "\n";
        cout << "Basic Salary: " << basicSalary << "\n";
        cout << "Experience: " << experience << " years\n";
        cout << "Project Bonus: " << projectBonus << "\n";
        cout << "Final Salary: " << finalSalary << "\n";
    }
};

int main() {
    SeniorDeveloper dev("Sanghamitra", 60000, 4, 5000);
    dev.displaySalary();
    return 0;
}
