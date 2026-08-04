#include<iostream>
using namespace std;
class calculator{
    float add;
    float sub;
    float multi;
    float div;
    int num1;
    int num2;
    public:
    void read(){
        cout<<"enter the num1";
        cin>>num1;
        cout<<"enter the num2";
        cin>>num2;


    }
    void adds(){
        add=num1+num2;
    
       
    }
    void subs(){
        if(num1<num2){
            sub=num2-num1;
        }
        else{
            sub=num1-num2;
        }
       
    }
    void multip(){
        multi=num1*num2;
    }
    void divi(){
        if (num2!=0){
            div=num1/num2;
        }
        else{
            div=0;
        }
        
    }
    void display(){
        cout<<"the num1"<<num1<<endl;
        cout<<"the num2"<<num2<<endl;
        cout<<"the summation is"<<add<<endl;
        cout<<"the difference is"<<sub<<endl;
        cout<<"the product is"<<multi<<endl;
        cout<<"the div is"<<div<<endl;
    }

};
int main(){
    calculator c1;
    c1.read();
    c1.adds();
    c1.subs();
    c1.multip();
    c1.divi();
    c1.display();

}