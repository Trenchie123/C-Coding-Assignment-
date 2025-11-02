//C file to store transactions for a small retail
/*
NAME : MARTIN NDEGWA KAGECHU
REG NO: CT100/G/26201/25
Des : C file to record sale transactions and calculate total sales
*/

#include <stdio.h>

int main() {
    FILE *fptr;
    float amount, total = 0;

    fptr = fopen("C:\\Users\\HP\\Desktop\\Assignment\\C coding assignment\\sales.txt", "a+");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter sales amounts (enter 0 to stop):\n");
    while (1) {
        scanf("%f", &amount);
        if (amount == 0)
            break;
        fprintf(fptr, "%.2f\n", amount);
    }

    rewind(fptr); 

    while (fscanf(fptr, "%f", &amount) == 1) {
        total += amount;
    }

    fclose(fptr);

    printf("Total Sales for the Day: %.2f\n", total);

    return 0;
}