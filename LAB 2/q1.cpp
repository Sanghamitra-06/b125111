#include<iostream>
using namespace std;
class Student
{
    int roll;
    char name[50];
    int marks;
    public:
    void accept(){
        cout<<"enter the roll number:";
        cin>>roll;
        cout<<"enter the name:";
        cin>>name;
        cout<<"enter the mark:";
        cin>>marks;
    }
    void display(){
        cout<<"roll number"<<roll;
        cout<<"name"<<name;
        cout<<"mark"<<marks;
    }

};
int main(){
    Student s;
    s.accept();
    s.display();

}


