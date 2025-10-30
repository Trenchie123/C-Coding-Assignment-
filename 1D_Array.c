// 1D Array to monitor room occupancy and monitor revenue
/*
NAME: MARTIN NDEGWA KAGECHU
REG NO: CT100/G/26201/25
Des: 1D array to monitor weekly revenue and room occupancy
*/

#include <stdio.h>

int main (){
	
	int revenue[7];
	int total = 0;
	float average;
	int i;
	
	
	printf("Enter the revenue for each Day of the week:\n");
	for (i = 0 ;i < 7; i++) {
		printf("Day %d revenue: ", i+1);
		scanf("%d", &revenue[i]);
	}
	
	for (i = 0; i < 7; i++){
		total += revenue [i];
	}
	average = total / 7.0;
	
	printf("\n===== Weekly Revenue Report =====\n");
	for(i = 0; i <7; i++){
		printf("Day %d revenue : %d\n", i + 1, revenue [i]);
	}
	printf("Total weekly revenue: %d\n", total);
	printf("Average daily revenue: %.2f\n", average );
	
	
	
	
	return 0;
}