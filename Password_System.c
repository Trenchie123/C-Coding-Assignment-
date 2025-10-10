// a prompt Password system
/*
Name: Martin Ndegwa Kagechu
Reg NO: CT100 /G/26201/25
Des: Prompting a user for a Password which is 1234
*/

#include <stdio.h>

int main() {
    int password;

    do {
        printf("Enter your password: ");
        scanf("%d", &password);

   if (password != 1234) {
       printf("Wrong password! Try again.\n");
        }
        
    } while (password != 1234);  

    printf("Access Granted!\n");

    return 0;
}
