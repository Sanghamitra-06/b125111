#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marksC;
    float marksMath;
    float marksPhysics;
};

int main() {
    struct Student s;
    float total, average;
    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNumber);
    printf("Enter Name: ");
    scanf("%*c%[^\n]s", s.name);
    printf("Enter Marks in C: ");
    scanf("%f", &s.marksC);
    printf("Enter Marks in Mathematics: ");
    scanf("%f", &s.marksMath);
    printf("Enter Marks in Physics: ");
    scanf("%f", &s.marksPhysics);
    total = s.marksC + s.marksMath + s.marksPhysics;
    average = total / 3.0;
    printf("\nStudent Report Card \n");
    printf("Roll Number : %d\n", s.rollNumber);
    printf("Name  : %s\n", s.name);
    printf("C Mark: %.2f\n", s.marksC);
    printf("Math Mark: %.2f\n", s.marksMath);
    printf("Physics Marks: %.2f\n", s.marksPhysics);
    printf("Total Marks : %.2f\n", total);
    printf("Average Marks: %.2f\n", average);

    return 0;
}
