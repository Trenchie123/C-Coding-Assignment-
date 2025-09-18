/*
Name Martin Ndegwa Kagechu
Registration Number: CT100/G/26201/25
Description:Displaying profile
*/


#include<stdio.h>

int main( int argc, char** argv )
{
    int height;
    printf("Enter your Height (cm): ");
    scanf("%d", &height );
    printf("Your height is %d cm \n", height);
    char phonenumber [20];
    printf("Enter your Phone Number: ");
    scanf("%s", & phonenumber);
    printf("Your phone number is %s \n", phonenumber);
    int weight;
    printf("Enter your Weight (lbs) : ");
    scanf("%d", &weight);
    printf("Your Weight is %d lbs \n", weight);
    return 0;
}