#include <iostream>
#include <string>

using namespace std;

class Student {
    int rollNumber;
    string name;
    int numSubjects;
    float* marks;

public:
    Student() {
        marks = nullptr;
    }

    void acceptDetails() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cout << "Enter Name: ";
        cin>> name;
        cout << "Enter Number of Subjects: ";
        cin >> numSubjects;
    }

    void allocateMemory() {
        marks = new float[numSubjects];
    }

    void acceptMarks() {
        cout << "Enter marks for " << numSubjects << " subjects:" << endl;
        for (int i = 0; i < numSubjects; ++i) {
            cout << "Subject " << (i + 1) << ": ";
            cin >> marks[i];
        }
    }

    void calculateAndDisplayResult() {
        float total = 0;
        for (int i = 0; i < numSubjects; ++i) {
            total += marks[i];
        }
        float average = total / numSubjects;

        cout << "\nStudent Result" << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Average Marks: " << average << endl;
    }

    void releaseMemory() {
        delete[] marks;
        marks = nullptr;
    }
};

int main() {
    Student s;
    s.acceptDetails();
    s.allocateMemory();
    s.acceptMarks();
    s.calculateAndDisplayResult();
    s.releaseMemory();
    
    return 0;
}
