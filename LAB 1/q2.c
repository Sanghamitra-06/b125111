#include <stdio.h>
struct employee{
    int id;
    int salary;
    char name[50];
};
int main(){
    struct employee e[3];
    for(int i=0; i<3; i++){
        printf("enter the id:");
        scanf("%d",&e[i].id);
        printf("enter salary");
        scanf("%d",&e[i].salary);
        printf("enter name");
        scanf("%s",e[i].name);
    }
    printf("\nenter the detail of the employee\n");
    for(int i=0; i<3; i++){
        printf("id: %d, salary: %d, name: %s\n", e[i].id, e[i].salary, e[i].name);
    }
}
