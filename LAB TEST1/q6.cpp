#include <iostream>
using namespace std;
void findHighestPrice(double *ptr, int size) {
    double highest = *ptr;
    for (int i = 0; i < size; i++) {
        if (*ptr > highest) {
            highest = *ptr;
        }
        ptr++;
    }
    cout << "Highest price: " << highest << endl;
}
int main(){
    double prices[7]={10.9,78.9,45.0,32.8,55,90.7,12};
    findHighestPrice(prices, 7);

    return 0;
}


