#include <iostream>
#include <string>
using namespace std;
class Employee {
protected:
    int employeeID;
    string name;
public:
    Employee(int id, string n) : employeeID(id), name(n) {}
};
class Developer : virtual public Employee {
protected:
    string programmingLanguage;
public:
    Developer(int id, string n, string lang) : Employee(id, n), programmingLanguage(lang) {}
};
class Tester : virtual public Employee {
protected:
    string testingTool;
public:
    Tester(int id, string n, string tool) : Employee(id, n), testingTool(tool) {}
};

class TechLead : public Developer, public Tester {
public:
    TechLead(int id, string n, string lang, string tool)
        : Employee(id, n), Developer(id, n, lang), Tester(id, n, tool) {}

    void displayTechLeadInfo() {
        cout << "--- TechLead Profile Breakdown ---" << "\n";
        cout << "ID: " << employeeID << "\n";
        cout << "Name: " << name << "\n";
        cout << "Development Language: " << programmingLanguage << "\n";
        cout << "Testing Framework/Tool: " << testingTool << "\n";
    }
};

int main() {
    TechLead lead(1024, "Sarah", "C++", "Selenium");
    lead.displayTechLeadInfo();
    return 0;
}
