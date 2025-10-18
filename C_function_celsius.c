/*
Name = MARTIN NDEGWA KAGECHU
REG NO : CT100/G/26201/25
Des:  c Function that changes temperature from farenheight to celcius
*/

#include <stdio.h>
 
 float convertToCelcius( float farenheit );

int main ()
{
float farenheit, celcius;

printf("Enter the temperature( F)  " ) ;
scanf("%f", &farenheit);	

celcius = convertToCelcius( farenheit );

printf("The Temperature in Celcius is %.2f", celcius);
	
return 0 ; 
}

float convertToCelcius( float farenheit ) 
{

float celcius;

celcius = ( farenheit - 32) * 5 / 9 ;

return celcius ;

}

