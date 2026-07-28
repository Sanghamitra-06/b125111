#include <stdio.h>
struct book{
    int id;
    char title[100];
    char name[50];
    float price;
};
int main(){
    struct book b1;
    printf("enter the book id:");
    scanf("%d",&b1.id);
    printf("enter the title");
    scanf("%s",&b1.title);
    printf("enter name of author");
    scanf("%s",&b1.name);
     printf("enter price");
    scanf("%f",&b1.price);
    printf("enter the detail of the book");
    printf("enter book id: %d\n",b1.id);
    printf("enter title: %s\n",b1.title);
    printf("enter name of author:%s\n",b1.name);
    printf("enter price.%f\n",b1.price);
   return 0;
    


}