/*
Name : MARTIN NDEGWA KAGECHU
Reg NO : CT100/G/26201/25
Des : Electric bill calculator using a C fucntion
*/

#include <stdio.h>

float calculateElectricbill(int units);

int main()
{
	
	int units;
	float bill;
	
	printf("Enter your Electric Bill :   ");
	scanf("%d", &units);
	
	bill = calculateElectricbill(units);
	printf("Total Electric Bill = Ksh. %.2f\n", bill);
	
	return 0;
}

float calculateElectricbill(int units)
{
      float amount;
   
      if (units <=100)
      	amount = units * 10;
      else if (units <= 200)
      	amount = (100*10) + (units - 100)*15;
      else 
      	amount = (100 * 10) + (100 * 15) + (units - 200) *20;
      
      return amount;

}
 



