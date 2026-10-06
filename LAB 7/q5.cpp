#include <iostream>
using namespace std;
class Academic {
protected:
    double mark1, mark2, mark3;
public:
    Academic(double m1, double m2, double m3) : mark1(m1), mark2(m2), mark3(m3) {}
};
class Sports {
protected:
    double sportsMark;
public:
    Sports(double sm) : sportsMark(sm) {}
};
class StudentResult : public Academic, public Sports {
public:
    StudentResult(double m1, double m2, double m3, double sm) 
        : Academic(m1, m2, m3), Sports(sm) {}

    void displayResult() {
        double total = mark1 + mark2 + mark3 + sportsMark;
        double average = total / 4.0;
        
        cout << "Academic Marks\n";
        cout << "Subject 1: " << mark1 << "\nSubject 2: " << mark2 << "\nSubject 3: " << mark3 << "\n";
        cout << "Sports Marks\n";
        cout << "Sports Score: " << sportsMark << "\n";
        cout << "Total Marks Obtained: " << total << "\n";
        cout << "Average Performance Score: " << average << "\n";
    }
};

int main() {
    StudentResult student(85.5, 90.0, 78.0, 92.0);
    student.displayResult();
    return 0;
}
