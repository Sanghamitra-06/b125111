#include <iostream>
#include <string>
using namespace std;
class Student {
    string name;
    int total_marks;
public:
    Student(string n, int m) : name(n), total_marks(m) {}
    bool operator>(const Student& s) {
        return total_marks > s.total_marks;
    }
    string getName() const { return name; }
};

int main() {
    Student s1("Sneha", 85);
    Student s2("saira", 92);
    if (s2 > s1) {
        cout << s2.getName() << " has higher marks." <<endl;
    } else {
        cout << s1.getName() << " has higher marks." <<endl;
    }
    return 0;
}
