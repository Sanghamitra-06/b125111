#include <iostream>
#include <string>
using namespace std;
class Student {
protected:
    string name;
    int rollNo;
public:
    Student(string n, int r) : name(n), rollNo(r) {}
    virtual void calculateResult() {
        cout << "Calculating standard result.\n";
    }
};

class RegularStudent : public Student {
private:
    double marks;
public:
    RegularStudent(string n, int r, double m) : Student(n, r), marks(m) {}
    void calculateResult() override {
        cout << "Regular Student: " << name << " (Roll No: " << rollNo << ")\n";
        cout << "Total Marks: " << marks << "\n";
    }
};

class ScholarshipStudent : public Student {
private:
    double marks;
public:
    ScholarshipStudent(string n, int r, double m) : Student(n, r), marks(m) {}
    void calculateResult() override {
        double totalMarks = marks + 5;
        cout << "Scholarship Student: " << name << " (Roll No: " << rollNo << ")\n";
        cout << "Total Marks (Includes 5 Bonus Marks): " << totalMarks << "\n";
    }
};

int main() {
    RegularStudent student1("snehiara", 101, 82);
    ScholarshipStudent student2("tanishka", 102, 82);

    student1.calculateResult();
    cout << "\n";
    student2.calculateResult();

    return 0;
}
