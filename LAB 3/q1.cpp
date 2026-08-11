#include <iostream>
using namespace std;
int main(){
    int *ptr =new int;
    cout<<"enter an integer";
    cin>> *ptr;
    cout<<"the value is stored dynamically"<< *ptr<<endl;
    delete ptr;
    ptr=nullptr;
    return 0;

}