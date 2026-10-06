#include <iostream>
using namespace std;
class InternalExam {
public:
    void display() {
        cout << "Displaying Internal Exam Marks.\n";
    }
};

class ExternalExam {
public:
    void display() {
        cout << "Displaying External Exam Marks.\n";
    }
};

class FinalResult : public InternalExam, public ExternalExam {
public:
    void showResults() {
        InternalExam::display();
        ExternalExam::display();
    }
};

int main() {
    FinalResult result;
    result.InternalExam::display();
    result.ExternalExam::display();
    cout << "\n";
    result.showResults();
    return 0;
}
