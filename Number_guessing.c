//Number guesing game
/*
Name : Martin Ndegwa Kagechu
Reg NO : CT100/G/26201/25
Des : a number guessing game between the numbers 1 to 20
*/

#include <stdio.h>

int main() {
    int secret = 12;  
    int guess;

    printf("Guess the number between 1 and 20:\n");
    scanf("%d", &guess);

    while (guess != secret){
    if (guess > secret){
    printf("Too high! Try again:\n");
	} 
    else if (guess < secret) {
    printf("Too low! Try again:\n");
	}

    scanf("%d", &guess); 
    }

    printf("Congratulations! You guessed the correct number.\n");
    return 0;
}