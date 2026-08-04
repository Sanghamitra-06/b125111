#include <iostream>
#include <string>

using namespace std;

class StudentResult {

    string studentName;
    int rollNumber;
    double marks[5];
    double totalMarks;
    double percentage;
    char grade;

public:
    
    void acceptDetails() {
        cout << "Enter Student Name: ";
        cin.ignore(); 
        getline(cin, studentName);
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        
        cout << "Enter marks for 5 subjects (out of 100 each):\n";
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << (i + 1) << ": ";
            cin >> marks[i];
        }
    }

    
    void calculateResult() {
        totalMarks = 0;
        for (int i = 0; i < 5; i++) {
            totalMarks += marks[i];
        }
        percentage = (totalMarks / 500.0) * 100.0;
    }

    
    void displayResult() {
        
        if (percentage >= 90) {
            grade = 'A';
        } else if (percentage >= 80) {
            grade = 'B';
        } else if (percentage >= 70) {
            grade = 'C';
        } else if (percentage >= 60) {
            grade = 'D';
        } else {
            grade = 'F';
        }

       
        cout << "        STUDENT REPORT         \n";
       
        cout << "Student Name : " << studentName << "\n";
        cout << "Roll Number  : " << rollNumber << "\n";
       
        cout << "Total Marks  : " << totalMarks << " / 500\n";
        cout << "Percentage   : " << percentage << "%\n";
        cout << "Final Grade  : " << grade << "\n";
        
    }
};

int main() {
    StudentResult student;
    student.acceptDetails();
    student.calculateResult();
    student.displayResult();
    return 0;
}
