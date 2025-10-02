//Mobile data Purchase 
/*
Name : Martin Ndegwa Kagechu 
Reg No: CT100/G/26201/25
Des : purchasing Mobile data 
*/

#include <stdio.h>

int main () {
    int choice ;
    printf("Select a Data Bundle:\n");
    printf("1. 100 MB for 50 KES \n");
    printf("2. 500 MB for 200 KES \n");
    printf("3. 1 GB for 350 KES \n");
    printf("4. 2GB for 600 KES \n" );
    printf("Enter Your Choice (1-4):  ");
    scanf("%d", &choice);
    
    switch (choice) {
    case 1:
    printf(" You chose 100MB, cost = KES 50 \n ");
    break;
    
    case 2:
    printf(" You chose 500MB, cost = KES 200 \n");
    break;
    
    case 3:
    printf(" You chose 1GB, cost= KES 350 \n");
    break;
    
    case 4:
    printf(" You chose 2GB, cost = KES 600 \n");
    break;
    
    default: 
    printf("Invalid Choice! Please Select the ones given above ( 1 - 4 ) ");
    }
    return 0;
    }

