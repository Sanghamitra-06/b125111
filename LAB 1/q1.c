#include <stdio.h>
struct student{
    int roll;
    float cg;
    int age;
    char name[50];
};
int main(){
    struct student s1;
    printf("enter the roll no:");
    scanf("%d",&s1.roll);
    printf("enter the cg");
    scanf("%f",&s1.cg);
    printf("enter age");
    scanf("%d",&s1.age);
     printf("enter name");
    scanf("%s",&s1.name);
    printf("enter the detail of the students");
    printf("enter roll: %d\n",s1.roll);
    printf("enter age: %d\n",s1.age);
    printf("enter name %s\n",s1.name);
    printf("enter cg %.2f\n",s1.cg);
    return 0;
    


}