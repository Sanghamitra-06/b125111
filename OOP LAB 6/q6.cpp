#include <iostream>
using namespace std;
class Counter {
    int value;
public:
    Counter(int v = 0) : value(v) {}
    Counter& operator++() {
        ++value;
        return *this;
    }
    Counter operator++(int) {
        Counter temp = *this;
        ++value;
        return temp;
    }
    void display() const {
        cout << value << endl;
    }
};
int main() {
    Counter c(5);
    cout << "Initial value: ";
    c.display();
    cout << "Applying prefix (++c):" << endl;
    Counter cPre = ++c;
    cout << "Returned value: ";
    cPre.display();
    cout << "Counter value after: ";
    c.display();
    cout << "Applying postfix (c++):" << endl;
    Counter cPost = c++;
    cout << "Returned value: ";
    cPost.display();
    cout << "Counter value after: ";
    c.display();

    return 0;
}
