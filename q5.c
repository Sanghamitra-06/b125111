#include <stdio.h>
struct rectangle{
   int length;
   int breadth;
   
};
int main(){
    struct rectangle r1;;
    printf("enter the length:");
    scanf("%d",&r1.length);
    printf("enter the breadth");
    scanf("%d",&r1.breadth);
    int area=r1.breadth*r1.length;
    int perimeter=2*(r1.breadth + r1.length);
    printf("area is: %d",area);
   
    printf("perimeter is: %d",perimeter);
    
    
   return 0;
    


}