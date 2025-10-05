// Water Bill Calculator 
/*
Name : Martin Ndegwa Kagechu 
Reg No: CT100/G/26201/25
Des: Calculating water bills
*/

#include <stdio.h>

int main (){
     int units;
     float result;
    printf("Enter the number of Water Units consumed :  ");
    scanf("%d", &units);
    
    if ( units>= 0 && units<= 30) {
       result= units * 20 ;
    printf(" The Total Water Bill is KES %.2f \n",result);
    }
    else if( units >= 31 && units<= 60 ) {
        result= units * 25 ;
    printf(" The Total Water Bill is KES %.2f \n", result);
    }
    else if( units >= 60) {
        result= units * 30 ;
    printf( "The Total Water Bill is KES %.2f \n", result);
    }
    
    return 0;
    }
    
