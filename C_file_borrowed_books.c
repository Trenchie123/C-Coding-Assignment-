//C files program for a librarian
/*
Name : MARTIN NDEGWA KAGECHU
Reg MO : CT100/G/26201/25
Des : A program to enter book tittles and store them in a library
*/

#include <stdio.h>

int main() {
	FILE * fptr;
	char tittle [100];
	
	fptr = fopen("C:\\Users\\HP\\Desktop\\Assignment\\C coding assignment\\borrowed_books.txt","a");
	if (fptr == NULL){
    printf("Error opening file");
    return 1;
}
	 while (1) {
	printf("Enter the Book Title ( Type exit to stop) :\n ");
    fgets(tittle, sizeof(tittle), stdin);
	 if (tittle[0]=='e' && tittle[1]=='x' && tittle[2]=='i' && tittle[3]=='t')
        break;

	
	
	fprintf(fptr, " Book Borrowed: %s\n", tittle);
	 }
	
	fclose(fptr);
	printf ("The Book tittles have been written to borrowed_books.txt. \n");
	return 0;
}