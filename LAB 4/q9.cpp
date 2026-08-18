#include <iostream>
#include <string>
using namespace std;
class Exam {
private:
    string studentName;
    string subject;
    double marks;
    double maximumMarks;
public:
    Exam(string name, string sub, double m, double maxM) {
        studentName = name;
        subject = sub;
        marks = m;
        maximumMarks = maxM;
    }
    friend class Result;
};
class Result {
public:
    double calculatePercentage(const Exam& e) {
        return (e.marks / e.maximumMarks) * 100.0;
    }
    void displayPassFail(const Exam& e) {
        double pct = calculatePercentage(e);
        if (pct >= 33.0) {
            cout << "Result Status: Pass" << endl;
        } else {
            cout << "Result Status: Fail" << endl;
        }
    }
void displayCompleteResult(const Exam& e) {
        double pct = calculatePercentage(e);
        cout << "Student Name: " << e.studentName << endl;
        cout << "Subject: " << e.subject << endl;
        cout << "Marks Obtained: " << e.marks << " / " << e.maximumMarks << endl;
        cout << "Percentage: " << pct << "%" << endl;
        displayPassFail(e);
    }
};
int main() {
    Exam studentExam("LISA", "Computer Science", 95, 100);
    Result res;
    res.displayCompleteResult(studentExam);
    return 0;
}
