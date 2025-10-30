// 3d array
/*
NAME : MARTIN NDEGWA KAGECHU
REG NO: CT100/G/26201/25
DES: A 3D array for multiple braches
*/

#include <stdio.h>

int main(){
	     int occupancy[5][10] = {
        {1, 0, 1, 0, 1, 0, 1, 1, 0, 1}, // Floor 1
        {0, 1, 0, 1, 1, 1, 0, 0, 1, 0}, // Floor 2
        {1, 1, 1, 0, 0, 1, 0, 1, 1, 1}, // Floor 3
        {0, 0, 1, 1, 0, 1, 1, 0, 0, 1}, // Floor 4
        {1, 1, 0, 0, 1, 1, 1, 1, 0, 0}  // Floor 5
    };

    int floor, room, occupied, vacant;

    // Display in matrix form
    printf("ROOM OCCUPANCY MATRIX (1 = occupied, 0 = vacant)\n\n");
    printf("        ");
    for (room = 0; room < 10; room++)
        printf("R%-2d ", room + 1);
    printf("\n");

    for (floor = 0; floor < 5; floor++) {
        printf("Floor %d | ", floor + 1);
        for (room = 0; room < 10; room++)
            printf(" %d  ", occupancy[floor][room]);
        printf("\n");
    }

    // Summary per floor
    printf("\nOCCUPANCY SUMMARY PER FLOOR:\n");
    for (floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;

        for (room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d ? Occupied: %d, Vacant: %d\n", floor + 1, occupied, vacant);
    }

    // Total summary
    int totalOccupied = 0, totalVacant = 0;
    for (floor = 0; floor < 5; floor++) {
        for (room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1)
                totalOccupied++;
            else
                totalVacant++;
        }
    }

    printf("\nTOTAL HOTEL SUMMARY:\n");
    printf("Total Occupied Rooms: %d\n", totalOccupied);
    printf("Total Vacant Rooms:   %d\n", totalVacant);

    return 0;
	
	return 0;
	
}
