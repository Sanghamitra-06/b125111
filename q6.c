#include <stdio.h>

struct Distance {
    int feet;
    int inches;
};

int main() {
    struct Distance d1, d2, total;

    printf("Enter 1st distance:\n");
    printf("Feet: ");
    scanf("%d", &d1.feet);
    printf("Inches: ");
    scanf("%d", &d1.inches);

    printf("\nEnter 2nd distance:\n");
    printf("Feet: ");
    scanf("%d", &d2.feet);
    printf("Inches: ");
    scanf("%d", &d2.inches);

    total.feet = d1.feet + d2.feet;
    total.inches = d1.inches + d2.inches;

    printf("\nTotal Distance: %d feet and %d inches\n", total.feet, total.inches);

    return 0;
}
