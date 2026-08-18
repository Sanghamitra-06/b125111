#include <iostream>
#include <string>
using namespace std;
class Diary {
    private:
    string ownerName;
    int numberOfEntries;
    string lastEntry;
public:
    Diary(string name, int entries, string last) {
        ownerName = name;
        numberOfEntries = entries;
        lastEntry = last;
    }
        friend void displayDiary(const Diary& d);
};
void displayDiary(const Diary& d) {
    cout << "Owner Name: " << d.ownerName << endl;
    cout << "Number of Entries: " << d.numberOfEntries << endl;
    cout << "Last Entry: " << d.lastEntry << endl;
}
int main() {
    Diary myDiary("Sira", 42, "Had a productive day coding.");
    displayDiary(myDiary);
    return 0;
}

