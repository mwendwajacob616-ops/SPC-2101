#include <stdio.h>
int main() {
    int occupancy[5][10];
    int occupied, vacant;
    int i, j;
    printf("Enter room occupancy for 5 floors (1 = Occupied, 0 = Vacant):\n");
    for(i = 0; i < 5; i++) {
        printf("\n--- Floor %d ---\n", i + 1);
        for(j = 0; j < 10; j++) {
            printf("Room %d: ", j + 1);
            scanf("%d", &occupancy[i][j]);
        }
    }
    printf("\n\n===== Room Occupancy Report =====\n");
    for(i = 0; i < 5; i++) {
        occupied = 0;
        vacant = 0;
        for(j = 0; j < 10; j++) {
            if(occupancy[i][j] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("Floor %d -> Occupied: %d, Vacant: %d\n", i + 1, occupied, vacant);
    }
    return 0;
}