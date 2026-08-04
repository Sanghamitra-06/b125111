#include <iostream>
#include <string>

using namespace std;

class LibraryBook {

    string bookID;
    string bookTitle;
    string studentName;
    int daysIssued;
    double fine;

public:
   
    void enterDetails() {
        cout << "Enter Book ID: ";
        cin >> bookID;
        cin.ignore(); 
        cout << "Enter Book Title: ";
        getline(cin, bookTitle);
        cout << "Enter Student Name: ";
        getline(cin, studentName);
        cout << "Enter Number of Days Book was Issued: ";
        cin >> daysIssued;
    }

   
    void calculateFine() {
        if (daysIssued > 15) {
            fine = (daysIssued - 15) * 2.0;
        } else {
            fine = 0.0;
        }
    }

    
    void displayTransactionDetails() {
        cout << "\n--- Library Transaction Details ---\n";
        cout << "Book ID:         " << bookID << "\n";
        cout << "Book Title:      " << bookTitle << "\n";
        cout << "Student Name:    " << studentName << "\n";
        cout << "Days Issued:     " << daysIssued << " days\n";
        cout << "Late Return Fine: " << "Rs. " << fine << "\n";
        cout << "-----------------------------------\n";
    }
};

int main() {
    LibraryBook book;

    cout << "--- Log Library Transaction ---\n";
    book.enterDetails();
    
    
    book.calculateFine();
    
    book.displayTransactionDetails();

    return 0;
}
