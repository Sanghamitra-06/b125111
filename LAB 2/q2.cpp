#include<iostream>
using namespace std;
class rectangle{
    int length;
    int breadth;
    int area;
    int perimeter;
    public:
    void read(){
        cout<<"enter the length";
        cin>>length;
        cout<<"enter the breadth";
        cin>>breadth;


    }
    void areas(){
        area=length*breadth;
    
       
    }
    void perimeters(){
        perimeter=2*(length+breadth);
       
    }
    void display(){
        cout<<"the length is"<<length<<endl;
        cout<<"the breadth is"<<breadth<<endl;
        cout<<"the area is"<<area<<endl;
        cout<<"the perimter is"<<perimeter<<endl;
    }

};
int main(){
    rectangle r1;
    r1.read();
    r1.areas();
    r1.perimeters();
    r1.display();

}