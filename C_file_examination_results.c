// Examination details for students in a university
/*
Name : MARTIN NDEGWA KAGECHU
Reg No : CT100/G/26201/25
Des : A binary file that contains student details in a University
*/

#include <stdio.h>   
#include <string.h>  

int main() {
    FILE *file;
    char name[50], regNo[20];
    int totalMarks;
    int choice;

    while (1) {
        printf("\n==== STUDENT EXAM RESULTS ====\n");
        printf("1. Add a student\n");
        printf("2. View all students\n");
        printf("3. Exit program\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 

        if (choice == 1) {
            
            file = fopen("C:\\Users\\HP\\Desktop\\Assignment\\C coding assignment\\results.dat", "ab");
            if (file == NULL) {
                printf("? Error: Could not open file.\n");
                return 1;
            }

            printf("\nEnter student name: ");
            fgets(name, sizeof(name), stdin);
            name[strcspn(name, "\n")] = '\0';

            printf("Enter registration number: ");
            fgets(regNo, sizeof(regNo), stdin);
            regNo[strcspn(regNo, "\n")] = '\0';

            printf("Enter total marks: ");
            scanf("%d", &totalMarks);
            getchar();

            
            fwrite(name, sizeof(name), 1, file);
            fwrite(regNo, sizeof(regNo), 1, file);
            fwrite(&totalMarks, sizeof(totalMarks), 1, file);

            fclose(file);
            printf("? Student record saved successfully!\n");
        }

        else if (choice == 2) {
            
            file = fopen("C:\\Users\\HP\\Desktop\\Assignment\\C coding assignment\\results.dat", "rb");
            if (file == NULL) {
                printf("?? No records found yet.\n");
                continue;
            }

            printf("\n--- LIST OF STUDENT RECORDS ---\n\n");
        while (fread(name, sizeof(name), 1, file) == 1 &&
              fread(regNo, sizeof(regNo), 1, file) == 1 &&
              fread(&totalMarks, sizeof(totalMarks), 1, file) == 1) {

              printf("Name: %s\n", name);
              printf("Reg No: %s\n", regNo);
              printf("Total Marks: %d\n", totalMarks);
              printf("-----------------------------\n");
            }

            fclose(file);
            printf("? All student records displayed successfully.\n");
        }

        else if (choice == 3) {
            printf("?? Exiting program. Goodbye!\n");
            break;
        }

        else {
            printf("? Invalid choice. Please try again.\n");
        }
    }

    return 0;
}