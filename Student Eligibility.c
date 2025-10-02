// Chekxing Student Eligibility 
/*
Name : Martin Ndegwa Kagechu 
Reg No: CT100/G/26201/25
Description: Determining if a student is eligibile for an Examination 
*/

#include <stdio.h>

int main() {
      int attendance ;
      float marks;
      
       printf(" Write your Total Attendance for this Semester :\t ");
       scanf("%d", &attendance);
     
       printf("What are your Average marks : \t ");
       scanf("%f", &marks );
        
        if (attendance >= 75 && marks >= 40) {
       printf( "You are eligible for the examination \n");
       } 
        else {
        printf( "You are not eligible for the examination \n");
        }
        return 0;
        }
        