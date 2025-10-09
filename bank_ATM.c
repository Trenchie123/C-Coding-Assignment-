//Bank ATM
/*
Name : Martin Ndegwa Kagechu
Reg No : CT100/G/26201/25
Des: Using while loop to show balance after withdraw in a bank ATM
*/

#include <stdio.h>

int main() {
	float balance = 100000;
	float withdraw ;
	
	while (balance > 0) {
	printf("Enter the Amount you want to withdraw :  ");
    scanf("%f", &withdraw);  
	
	if (withdraw > balance) {
		printf("Insufficient Funds, current balance : %.2f\n", balance);}
	else {
		balance = balance - withdraw ;
		printf("Withdrawal Successful: New Balance: %.2f\n", balance );
	}
		
	}
	printf("Account Empty, No more withdrawals access.\n");
	
	return 0 ;
}
