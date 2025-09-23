// C Coding Calculations //
/*
Name: Martin Ndegwa Kagechu 
Reg No: CT100/G/26201/25
Des: Calculating Volume and Surface Area of a Cylinder 
*/





#include <stdio.h>
#define PI 3.1416

int main() {
    float radius , height , volume , surfaceArea;

    printf("Enter radius of the cylinder (m) : ");
    scanf("%f", & radius);

    printf("Enter height of the cylinder (m) : ");
    scanf("%f", & height);

    volume = PI * radius * radius * height;                  
    surfaceArea = 2 * PI * radius * radius + 2 * PI * radius * height;

    printf("\nVolume = %.2f\n ", volume );
    printf("Surface Area = %.2f\n", surfaceArea );

    return 0;
}