#include <iostream>
using namespace std;
int main() {
    int bookIDs[6] = {101, 102, 103, 104, 105, 106};
    int* ptr = bookIDs;
    for (int i = 0; i < 6; ++i) {
        cout << "Book ID: " << *ptr << "Address: " <<ptr<<endl;
    }

return 0;
}