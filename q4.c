#include <stdio.h>
struct product{
    int id;
    char name;
    int price;
    int quantity;
};
int main(){
    struct product s1;
    printf("enter the product id:");
    scanf("%d",&s1.id);
    printf("enter the name");
    scanf("%s",&s1.name);
    printf("enter price");
    scanf("%d",&s1.price);
     printf("enter quantity");
    scanf("%d",&s1.quantity);
    float totalcost=s1.price*s1.quantity;
    printf("enter the detail of the product");
    printf("enter id: %d\n",s1.id);
    printf("enter name: %s\n",s1.name);
    printf("enter price: %d\n",s1.price);
    printf("enter quantity: %d\n",s1.quantity);
    printf("the total cost:%d\n",totalcost);
   return 0;
    


}