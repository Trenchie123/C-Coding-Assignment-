/*
Name : MARTIN NDEGWA KAGECHU
Reg NO : CT100/G/26201/25
Des : Calculating fare for transport for a certain amount of kilometer
*/

#include <stdio.h>

float calculateFare( float distance);

int main () 
{
	float distance, fare;
	printf("Enter the Total distance Travelled:  ");
	scanf("%f", &distance);
	
	fare = calculateFare( distance);
	printf( "Your total fare used is %f", fare);
	
	return 0;
}

float calculateFare( float distance)
{

float totalFare;

totalFare = distance * 50;

return totalFare ;
}

