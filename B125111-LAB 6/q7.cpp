#include<iostream>
using namespace std;
int main(){
    char sentence[]="Hello OOPS";
    char *ptr=sentence;
    int uppercase=0;
    int lowercase=0;
    int spaces=0;
    while(*ptr!='\0'){
        if(*ptr >='A' && *ptr<='Z'){
            uppercase++;
        }
        else if(*ptr>='a' && *ptr<='z'){
                lowercase++;
        }
        else if (*ptr == ' ') {
            spaces++;
        }
        else{
            ptr++;
        }
    }
    cout<<"Sentence"<<sentence<<endl;
    cout<<"Number of uppercses:"<<uppercase<<endl;
    cout<<"Number of lowercases:"<<lowercase<<endl;
    cout<<"Number of spaces:"<<spaces<<endl;
    return 0;


}